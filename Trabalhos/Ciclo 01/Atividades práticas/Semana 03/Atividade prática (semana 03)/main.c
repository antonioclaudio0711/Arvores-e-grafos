#include <stdlib.h>
#include <locale.h>
#include <conio.h>

#include "metodos.h"

#define tam 5


int main (){

setlocale(LC_ALL, "Portuguese");

int i, op;
int cont, conttro, contcomp;
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
printf ("3 - M�todo de Ordena��o Insert Sort");
printf("\n");
printf("4 - Compara��o");
printf("\n");
printf("5 - SAIR");
printf("\n");
scanf("%i", &op );

switch(op)
  {
    case 1 :
	    printf("Ordena��o Bubble Sort\n");
	    printf("\n");
	    
	    BubbleSort(vet, tam);
	    
	    printf("\n");

    break;
    
    case 2 :
	    printf("Ordena��o Selection Sort\n");
	    printf("\n");
	    
	    SelectionSort(vet, tam);
	    
	    printf("\n");
    
    break;
    
	case 3 :
	    printf("Ordena��o Insertion Sort\n");
	    printf("\n");
	    
	    InsertionSort(vet, tam);
	    
	    printf("\n");
    
    break;
	
	case 4 : 
	    printf("Compara��o\n");
	    printf("\n");
	    
	    Comparacao(vet, tam);
	    
	    printf("\n");
    
    break;
    case 5 :
	    printf("SAINDO ..... ENCERRANDO O SOFTWARE ...");
	    printf("\n");
    
    break;
    
    default:
			
		printf("\nOP��O DIGITADA INV�LIDA\n");
		printf("\n");
    
	break;
	
}
} while (op!=5);

	printf("\n");
	system("pause");
	
	return 0;
}	













