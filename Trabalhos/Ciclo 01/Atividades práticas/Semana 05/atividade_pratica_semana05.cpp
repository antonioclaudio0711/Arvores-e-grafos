#include <iostream>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <math.h>

#define tam 5

void BubbleSort (int vet[]);
void SelectionSort (int vet[]);
void InsertionSort(int vet[]);
void QuickSort(int vet[], int esq, int dir);
void Merge(int vet[], int inicio, int meio, int fim);
void MergeSort(int vet[], int inicio, int fim, int cont);
void Heapify(int arr[], int n, int i);
void HeapSort(int arr[], int n);


int main (){

setlocale(LC_ALL, "Portuguese");

int i, op;
int cont, conttro, contcomp;
int vet[tam];

printf("MÉTODOS DE ORDENAÇÃO");
printf("\n");

for(i=0; i<tam; i++) {
	printf("Preencha um Vetor: ");
	scanf("%i", &vet[i]);
}

do{

printf("\n");
printf("MENU DE OPÇÕES");
printf("\n");
printf("1 - Método de Ordenação Bubble Sort");
printf("\n");
printf("2 - Método de Ordenação Selection Sort");
printf("\n");
printf ("3 - Método de Ordenação Insert Sort");
printf("\n");
printf("4 - Método de Ordenação Quick Sort");
printf("\n");
printf("5 - Método de Ordenação Merge Sort");
printf("\n");
printf("6 - Método de Ordenação Heap Sort");
printf("\n");
printf("7 - SAIR");
printf("\n");
scanf("%i", &op );

switch (op)
  {
    case 1 :
    printf("Ordenação Bubble Sort\n");
    printf("\n");

    BubbleSort(vet);

    break;

    case 2 :
    printf("Ordenação Selection Sort\n");
    printf("\n");

    SelectionSort(vet);

    break;

    case 3 :
    printf("Ordenação Insertion Sort");
    printf("\n");

    InsertionSort(vet);

    break;

    case 4 :
    printf("Ordenação Quick Sort");
    printf("\n");

    QuickSort(vet, 0, tam-1);

    break;

    case 5 :
    printf("Ordenação Merge Sort");
    printf("\n");

    MergeSort(vet, 0, tam-1, cont);

    break;

    case 6 :
    printf("Ordenação HeapSort");
    printf("\n");

    HeapSort(vet, 0);

    break;

    case 7 :
    printf("SAINDO ..... ENCERRANDO O SOFTWARE ...");
    printf("\n");

    break;

    default:

		printf("\nOPÇÃO DIGITADA INVÁLIDA\n");

	break;

}
} while (op!=7);

	printf("\n");
	system("pause");

	return 0;
}



// ESCREVENDO AS FUNÇÕES E OS PROCEDIMENTOS

//*********************************************************************************************

void BubbleSort (int vet[])
{
	int i, j, n ;
	int temp, contcomp, conttro;

	contcomp = 0;
	conttro = 0;

	for (i=0; i<tam-1; i++)
	{
    	for (j=0; j<tam-i-1; j++)
		{
			contcomp = contcomp+1;

		 	if (vet[j] > vet[j+1])
		 	{
			 	temp = vet[j];
			 	vet[j] = vet[j+1];
			 	vet[j+1] = temp;
	 			conttro++;
	 		}
    	}
	}

    for(i=0; i<tam; i++) {
	printf("%i-", vet[i]);
}
    printf("\n");
    printf("A Quantidade de Comparações é:%i ", contcomp);
    printf("\n");
    printf("A Quantidade de Trocas é: %i", conttro);
    printf("\n");

}



//*********************************************************************************************

void SelectionSort (int vet[])
{

	int min_idx, j, i;
	int cont;


	cont = 0;

	for (i = 0; i <tam-1; i++) {

	min_idx = i;

	for (j = i+1; j<tam; j++) {
    	if (vet[j] < vet[min_idx]) {

			min_idx = j;

		}
	}

	int temp = vet[min_idx];
	vet[min_idx] = vet[i];
	vet[i] = temp;
	cont = cont + 1;

	}

	for(i=0; i<tam; i++) {
	printf("%i-", vet[i]);
}
    printf("\n");
    printf("A Quantidade de Trocas é: %i", cont);
    printf("\n");

}


//*********************************************************************************************

void InsertionSort(int vet[])
{
	int i, j, aux;
	int cont;

	cont = 0;

	for (i=1; i<tam; i++){
		aux = vet[i];
		j = i-1;

		while (j>=0 && vet[j] > aux) {
			vet[j+1] = vet[j];
			j--;
		}
		vet[j+1] = aux;
		cont = cont + 1;

	}

	for(i=0; i<tam; i++) {
	    printf("%i-", vet[i]);
    }

	printf("\n");
    printf("A Quantidade de Trocas é: %i", cont);
    printf("\n");

    //return cont;
}


//*********************************************************************************************

void QuickSort(int vet[], int esq, int dir){

	int i, j, x, y;
	int cont;

    cont=0;
	i=esq;
	j=dir;
	x=vet[(esq + dir)/2];

	while(i<=j) {
		while(vet[i] < x && i < dir) {
			i++;
		}
		while (vet[j] > x && j > esq) { // condição invertida
			j--;
		}
		if (i<=j) {
			y = vet[i];
			vet[i] = vet[j];
			vet[j] = y;
			i++;
			j--;
			cont++;
		}
	}

	if (j > esq) { // verificação para evitar índices inválidos
		QuickSort(vet, esq, j);
	}
	
	if (i < dir) { // verificação para evitar índices inválidos
		QuickSort(vet, i, dir);
	}

	for(i=esq; i<=dir; i++) { // alteração no loop de impressão
	    printf("%i-", vet[i]);
    }

}


//*********************************************************************************************

void Merge(int vet[], int inicio, int meio, int fim, int &cont) // alteração no parâmetro cont
{
	int tLadoE = meio - inicio + 1;
	int tLadoD = fim - meio;
	int esq[tLadoE];
	int dir[tLadoD];
	int idxEsq = 0;
	int idxDir = 0;
	int i, j, k;

	for(i = 0; i < tLadoE; i++) {
		esq[i] = vet[inicio + i];
	}
	for(j = 0; j < tLadoD; j++){
		dir[j] = vet[meio + i + j];
	}
	for(k = inicio; k <= fim; k++){
		if(idxEsq < tLadoE){
			if (idxDir < tLadoD){
				if(esq[idxEsq] < dir[idxDir]) {
					vet[k] = esq[idxEsq++];
				}
				else{
					vet[k] = dir[idxDir++];
				}
			}
			else {
				vet[k] = esq[idxEsq++];
			}
		}
		else {
			vet[k] = dir[idxDir++];
		}

		cont++; // atualização da variável cont
	}
}

//*********************************************************************************************

void MergeSort(int vet[], int inicio, int fim, int cont) // alteração no parâmetro cont
{
	if(inicio < fim) {
		int meio = (inicio + fim)/2;
		MergeSort(vet, inicio, meio, cont); // passagem da variável cont para a função Merge
		MergeSort(vet, meio + 1, fim, cont); // passagem da variável cont para a função Merge
		Merge(vet, inicio, meio, fim, cont); // passagem da variável cont por referência
	}
}

//*********************************************************************************************

void Heapify(int vet[], int n, int i) {

    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;


    if (left < n && vet[left] > vet[largest])
        largest = left;


    if (right < n && vet[right] > vet[largest])
        largest = right;

    if (largest != i) {
        int temp = vet[i];
        vet[i] = vet[largest];
        vet[largest] = temp;

        Heapify(vet, n, largest);
    }

}

//*********************************************************************************************

void HeapSort(int vet[], int n) {

    for (int i = n / 2 - 1; i >= 0; i--)
        Heapify(vet, n, i);

    int cont = 0;

    for (int i = n - 1; i >= 0; i--) {

        int temp = vet[0];
        vet[0] = vet[i];
        vet[i] = temp;

        Heapify(vet, i, 0);
        cont++;
    }
    
    for(int i=0; i<n; i++) {
	   printf("%i-", vet[i]);
    }

    printf("\n");
    printf("A Quantidade de Trocas é: %i", cont);
    printf("\n");
}
