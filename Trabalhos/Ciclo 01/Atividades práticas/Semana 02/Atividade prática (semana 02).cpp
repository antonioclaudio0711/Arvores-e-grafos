#include <iostream>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <math.h>

#define tam 5

using namespace std;

void BubbleSort (int vet[]);
void SelectionSort (int vet[]);

int main (){

setlocale(LC_ALL, "Portuguese");

int i, op;
int vet[tam];

printf("M�TODOS DE ORDENA��O");
printf("\n");

for(i=0; i<tam; i++) {
	printf("Preencha um Vetor: ");
	scanf("%i", &vet[i]);
}

do{

printf("\n");
printf("MENU DE OP��ES");
printf("\n");
printf("1 - M�todo de Ordena��o Bubble Sort");
printf("\n");
printf("2 - M�todo de Ordena��o Selection Sort");
printf("\n");
printf("3 - SAIR");
printf("\n");
scanf("%i", &op );

switch (op)
  {
    case 1 :
    printf("Ordena��o Bubble Sort\n");
    printf("\n");
    
    BubbleSort(vet);

    break;
    
    case 2 :
    printf("Ordena��o Selection Sort\n");
    printf("\n");
    
    SelectionSort(vet);
    
    break;
    
    case 3 :
    printf("SAINDO ..... ENCERRANDO O SOFTWARE ...");
    printf("\n");
    
    break;
    
    default:
			
		printf("\nOP��O DIGITADA INV�LIDA\n");
    
	break;
	
}
} while (op!=3);

	printf("\n");
	system("pause");
	
	return 0;
}	



// ESCREVENDO AS FUN��ES E OS PROCEDIMENTOS

//*********************************************************************************************

void BubbleSort (int vet[])
{	
	int i, j;
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
    printf("A Quantidade de Compara��es �:%i ", contcomp);
    printf("\n");
    printf("A Quantidade de Trocas �: %i", conttro);
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
    printf("A Quantidade de Trocas �: %i", cont);
    printf("\n");
	
}










