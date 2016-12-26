#include <stdio.h>
#include <stdlib.h> //atoi
#include <pthread.h>

// Find the sum of all the multiples of 3 or 5 below 1000.

void *multiple3(void *arg) {

  // Don't really know how to handle void* properly
  int limite = *(int *)arg;

  int somme = 0;
  int i;
  for (i = 3; i < limite; i += 3) {

    somme += i;
  }
  *((int *)arg) = somme;
  pthread_exit(arg);
}

void *multiple5(void *arg) {
  // Don't really know how to handle void* properly
  int limite = *(int *)arg;

  int somme = 0;
  int i;
  for (i = 5; i < limite; i += 5) {
    if (i % 3 != 0) // Do not count twice the multiples of 3
      somme += i;
  }
  *((int *)arg) = somme;
  pthread_exit(arg);
}

int main(int argc, char *argv[]) {

  if (argc > 1) {

    pthread_t thread3;
    pthread_t thread5;

    int limite3 = atoi(argv[1]);
    int limite5 = limite3;

    if (pthread_create(&thread3, NULL, multiple3, &limite3) == -1) {
      perror("pthread_create multiple3 : ");
      return -1;
    }

    if (pthread_create(&thread5, NULL, multiple5, &limite5) == -1) {
      perror("pthread_create multiple5 : ");
      return -1;
    }

    if (pthread_join(thread3, NULL)) {
      perror("pthread_join");
      return -1;
    }

    if (pthread_join(thread5, NULL)) {
      perror("pthread_join");
      return -1;
    }

    if (argc > 2 && *argv[2] == 'v') {

      printf("somme 3 : %d\n", limite3);
      printf("somme 5 : %d\n", limite5);
      printf("La réponse au problème 2 est %d\n", limite3 + limite5);
      //  printf("La reponse est : %d\n", part3[1] + part5[1]);
    }
  }

  else {
    printf("Passez la limite en argument\n");
    return -1;
  }
}
