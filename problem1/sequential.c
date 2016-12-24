#include <stdio.h>

int main(int argc, char *argv[]) {

  if (argc > 1) {
    int i = 0;
    int answer = 0;
    for (i = 3; i < 1000; i++) {
      if (i % 3 == 0 || i % 5 == 0)
        answer += i;
    }
    if (argc > 2 && *argv[2] == 'v') {
      printf("La réponse au problem 1 est : %d\n", answer);
    }
    return 0;
  }

  printf("Passez la limite en argument\n");
  return -1;
}
