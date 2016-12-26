#include <stdio.h>
#include <stdlib.h> //atoi
#include <pthread.h>

int nbThread = 2;

void *compute(void *arg) {
  int *tab = (int *)arg;
  // printf("tab[0] : %d\n", tab[0]);
  // printf("tab[1] : %d\n", tab[1]);
  int avg = tab[1] / nbThread;
  // printf("avg : %d\n", avg);
  int bornInf = tab[0] * avg;
  int bornSup = (tab[0] + 1) * avg;
  // printf("Boundaries : (%d,%d)\n", bornInf, bornSup);

  int index;
  int somme = 0;
  for (index = bornInf; index < bornSup; index++) {
    if (index % 3 == 0 || index % 5 == 0) {
      somme += index;
    }
  }
  *((int *)arg) = somme;
}

int main(int argc, char *argv[]) {
  if (argc > 1) {
    int limite = atoi(argv[1]);
    // nbThread = atoi(argv[2]);
    pthread_t tabThread[nbThread];

    int infot1[] = {0, limite};
    int infot2[] = {1, limite};
    pthread_create(&tabThread[0], NULL, compute, infot1);
    pthread_create(&tabThread[1], NULL, compute, infot2);

    pthread_join(tabThread[0], NULL);
    pthread_join(tabThread[1], NULL);
    // printf("resul : %d\n", infot1[0] + infot2[0]);
  }
}
