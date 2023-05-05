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
printf("4 - Comparação");
printf("\n");
printf("5 - SAIR");
printf("\n");
scanf("%i", &op );

switch(op)
  {
    case 1 :
	    printf("Ordenação Bubble Sort\n");
	    printf("\n");
	    
	    BubbleSort(vet, tam);
	    
	    printf("\n");

    break;
    
    case 2 :
	    printf("Ordenação Selection Sort\n");
	    printf("\n");
	    
	    SelectionSort(vet, tam);
	    
	    printf("\n");
    
    break;
    
	case 3 :
	    printf("Ordenação Insertion Sort\n");
	    printf("\n");
	    
	    InsertionSort(vet, tam);
	    
	    printf("\n");
    
    break;
	
	case 4 : 
	    printf("Comparação\n");
	    printf("\n");
	    
	    Comparacao(vet, tam);
	    
	    printf("\n");
    
    break;
    case 5 :
	    printf("SAINDO ..... ENCERRANDO O SOFTWARE ...");
	    printf("\n");
    
    break;
    
    default:
			
		printf("\nOPÇÃO DIGITADA INVÁLIDA\n");
		printf("\n");
    
	break;
	
}
} while (op!=5);

	printf("\n");
	system("pause");
	
	return 0;
}	













