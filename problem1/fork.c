#include <stdio.h>
#include <unistd.h> // fork & pipe
#include <fcntl.h>  // pipe
#include <stdlib.h> // atoi

//#include <sys/select.h> // select

// goal :Find the sum of all the multiples of 3 or 5 below argv[1]

int main(int argc, char *argv[]) {
  if (argc > 1) {
    int pid1;
    int pid2;

    int limite = atoi(argv[1]);

    int tube1[2];
    int tube2[2];

    pipe(tube1);

    pid1 = fork();

    if (pid1 > 0) { // father
      pipe(tube2);
      pid2 = fork();

      if (pid2 > 0) { // father
        close(tube1[1]);
        close(tube2[1]);

        int somme3;
        int somme5;
        read(tube1[0], &somme3, sizeof(int));
        read(tube2[0], &somme5, sizeof(int));

        int resul = somme3 + somme5;
        if (argc > 2 && *argv[2] == 'v')
          printf("La réponse est : %d\n", resul);
      }

      else {             // child2 handle multiples of 5
        close(tube1[0]); // close child1 's pipe
        close(tube1[1]);
        close(tube2[0]); // close useless fd

        int i;
        int somme5 = 0;
        for (i = 5; i < limite; i += 5) {
          if (!(i % 3 == 0))
            somme5 += i;
        }

        write(tube2[1], &somme5, sizeof(int));
      }

    }

    else {             // child1 handle multiples of 3
      close(tube1[0]); // close useless fd

      int i;
      int somme3 = 0;
      for (i = 3; i < limite; i += 3) {
        somme3 += i;
      }

      write(tube1[1], &somme3, sizeof(int));
    }
  } else {
    printf("Passez la limite en argurment\n");
  }
}
