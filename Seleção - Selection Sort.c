#include <stdio.h>

void selection_sort (int vetor[],int max) {
  int i, j, min, aux;
  
  for (i = 0; i < (max - 1); i++) {
    min = i;
    for (j = i+1; j < max; j++) {
      if (vetor[j] < vetor[min]) {
   min = j;
      }
    }
    if (i != min) {
      aux = vetor[i];
      vetor[i] = vetor[min];
      vetor[min] = aux;
    }
  }
  for (i = 0; i < max; i++) {
    printf ("%d ",vetor[i]);
  }
  printf ("\n");
}

main () {
  int max, i;
  scanf ("%d",&max);
  
  int  vetor[max];
  for (i = 0; i < max; i++) {
    scanf ("%d",&vetor[i]);
  }
  
  selection_sort (vetor, max);
  
}
