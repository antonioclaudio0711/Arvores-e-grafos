#include <stdio.h>

void quicksort(int vetor[], int inicio, int fim);

int main() {
  int n;

  printf("Digite o numero de itens a serem inseridos: ");
  scanf("%d", &n);

  int vetor[n];

  printf("Digite os itens:\n");

  for (int i = 0; i < n; i++) {
    scanf("%d", &vetor[i]);
  }

  quicksort(vetor, 0, n - 1);

  printf("Itens ordenados: ");

  for (int i = 0; i < n; i++) {
    printf("%d ", vetor[i]);
  }

  printf("\n");

  return 0;
}

void quicksort(int vetor[], int inicio, int fim) {
  int i, j, pivo, aux;

  i = inicio;
  j = fim;
  pivo = vetor[(inicio + fim) / 2];

  while (i <= j) {
    while (vetor[i] < pivo && i < fim) {
      i++;
    }
    while (vetor[j] > pivo && j > inicio) {
      j--;
    }
    if (i <= j) {
      aux = vetor[i];
      vetor[i] = vetor[j];
      vetor[j] = aux;
      i++;
      j--;
    }
  }

  if (j > inicio) {
    quicksort(vetor, inicio, j);
  }
  if (i < fim) {
    quicksort(vetor, i, fim);
  }
}
