#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100 // tamanho m�ximo da pilha

// Defini��o da estrutura da pilha
typedef struct {
    int top; // �ndice do topo da pilha
    int items[MAX_SIZE]; // vetor de itens da pilha
} Stack;

// Fun��o para verificar se a pilha est� vazia
int is_empty(Stack* stack) {
    return stack->top == -1;
}

// Fun��o para verificar se a pilha est� cheia
int is_full(Stack* stack) {
    return stack->top == MAX_SIZE - 1;
}

// Fun��o para adicionar um elemento � pilha
void push(Stack* stack, int item) {
    if (is_full(stack)) {
        printf("Erro: a pilha est� cheia.\n");
        exit(EXIT_FAILURE);
    }

    stack->items[++stack->top] = item;
}

// Fun��o para remover o elemento do topo da pilha
int pop(Stack* stack) {
    if (is_empty(stack)) {
        printf("Erro: a pilha est� vazia.\n");
        exit(EXIT_FAILURE);
    }

    return stack->items[stack->top--];
}

// Fun��o para imprimir a pilha
void print_stack(Stack* stack) {
    printf("Pilha atual: ");

    for (int i = 0; i <= stack->top; i++) {
        printf("%d ", stack->items[i]);
    }

    printf("\n");
}

int main() {
    Stack stack = { -1 }; // inicializa a pilha com o topo igual a -1

    push(&stack, 5);
    push(&stack, 2);
    push(&stack, 7);
    push(&stack, 1);

    // Ordena��o da pilha com o m�todo Bubble Sort
    int temp;
    for (int i = 0; i <= stack.top; i++) {
        for (int j = 0; j <= stack.top - i - 1; j++) {
            if (stack.items[j] > stack.items[j + 1]) {
                temp = stack.items[j];
                stack.items[j] = stack.items[j + 1];
                stack.items[j + 1] = temp;
            }
        }
    }

    print_stack(&stack);

    return 0;
}

