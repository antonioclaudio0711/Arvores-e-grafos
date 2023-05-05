#include <math.h>


// ESCREVENDO AS FUNÇÕES E OS PROCEDIMENTOS

//*********************************************************************************************

int BubbleSort(int vet[], int tam)
{
	int i, j,n ;
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
	 			conttro = conttro + 1;
	 		}
    	}
	}

    for(i=0; i<tam; i++) {
		printf("%i=", vet[i]);
	}

    printf("\n");
    printf("A Quantidade de Comparações é:%i ", contcomp);
    printf("\n");
    printf("A Quantidade de Trocas é: %i", conttro);
    printf("\n");

    return conttro;
}



//*********************************************************************************************

int SelectionSort (int vet[], int tam)
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
	printf("[%i]", vet[i]);
}
    printf("\n");
    printf("A Quantidade de Trocas é: %i", cont);
    printf("\n");

    return cont;
}

//*********************************************************************************************

int InsertionSort(int vet[], int tam)
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
	    printf("%i ", vet[i]);
    }

	printf("\n");
    printf("A Quantidade de Trocas é: %i", cont);
    printf("\n");

    return cont;
}

//*********************************************************************************************

void Comparacao (int vet[], int tam)
{
	int contBubble, contSelection, contInsert;

	contBubble = BubbleSort(vet, tam);
	    printf("A Quantidade de Troca do bubble é: %i\n", contBubble);
	contSelection = SelectionSort(vet, tam);
	contInsert = InsertionSort(vet, tam);

	if(contBubble < contSelection && contBubble < contInsert) {
		printf("O melhor método de ordenamento é o BubbleSort, pois este realizou somente %i trocas.", contBubble);
	}
	else if (contInsert < contBubble && contInsert < contSelection) {
            printf("O melhor método de ordenamento é o InsertSort, pois este realizou somente %i trocas.", contInsert);
	}
	else{
		printf("O melhor método de ordenamento é o SelectionSort, pois este realizou somente %i trocas.", contSelection);
	}
}












