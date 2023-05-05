#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100 // tamanho máximo da pilha

// Definição da estrutura da pilha
typedef struct {
    int top; // índice do topo da pilha
    int items[MAX_SIZE]; // vetor de itens da pilha
} Stack;

// Função para verificar se a pilha está vazia
int is_empty(Stack* stack) {
    return stack->top == -1;
}

// Função para verificar se a pilha está cheia
int is_full(Stack* stack) {
    return stack->top == MAX_SIZE - 1;
}

// Função para adicionar um elemento à pilha
void push(Stack* stack, int item) {
    if (is_full(stack)) {
        printf("Erro: a pilha está cheia.\n");
        exit(EXIT_FAILURE);
    }

    stack->items[++stack->top] = item;
}

// Função para remover o elemento do topo da pilha
int pop(Stack* stack) {
    if (is_empty(stack)) {
        printf("Erro: a pilha está vazia.\n");
        exit(EXIT_FAILURE);
    }

    return stack->items[stack->top--];
}

// Função para imprimir a pilha
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

    // Ordenação da pilha com o método Bubble Sort
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

