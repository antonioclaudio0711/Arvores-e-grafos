#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int arr[], int low, int high, int* comparacoes, int* trocas) {
    int pivot = arr[high];
    int i = (low - 1);
 
    for (int j = low; j <= high- 1; j++) {
        (*comparacoes)++;
        if (arr[j] <= pivot) {
            i++;
            swap(&arr[i], &arr[j]);
            (*trocas)++;
        }
    }
    swap(&arr[i + 1], &arr[high]);
    (*trocas)++;
    return (i + 1);
}

void quicksort(int arr[], int low, int high, int* comparacoes, int* trocas) {
    if (low < high) {
        int pi = partition(arr, low, high, comparacoes, trocas);
        quicksort(arr, low, pi - 1, comparacoes, trocas);
        quicksort(arr, pi + 1, high, comparacoes, trocas);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int tamanho, comparacoes = 0, trocas = 0;
    printf("Informe o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int arr[tamanho];

    srand(time(NULL));
    for (int i = 0; i < tamanho; i++) {
        arr[i] = rand() % 1001;
    }

    printf("Vetor original: ");
    printArray(arr, tamanho);

    quicksort(arr, 0, tamanho - 1, &comparacoes, &trocas);

    printf("Vetor ordenado: ");
    printArray(arr, tamanho);

    printf("Numero de chamadas a funcao principal: %d\n", comparacoes + trocas);
    printf("Numero de trocas realizadas: %d\n", trocas);
    printf("Numero de comparacoes realizadas: %d\n", comparacoes);

    return 0;
}
