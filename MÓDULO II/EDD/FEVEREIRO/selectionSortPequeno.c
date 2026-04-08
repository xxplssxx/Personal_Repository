#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    Função que implementa o algoritmo Selection Sort
    A ideia é simples:
    - Percorremos o array
    - Procuramos o menor elemento da parte que aind a não foi ordenada
    - Trocamos esse menor valor com a posição atual
*/
void selectionSort(int arr[], int n) {
    int i, j, min, temp;

    // Percorre o array até a penúltima posição
    for (i = 0; i < n - 1; i++) {
        // Assume que o menor elemento está na posição atual
        min = i;

        // Procura um valor menor nas posições seguintes
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }

        // Faz a troca do menor elemento encontrado
        temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}

/*
    Função apenas para imprimir o array na tela
*/
void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    // Inicializa a seed do gerador de números aleatórios
    srand(time(NULL));

    // Define um array pequeno com 10 posiç~ões
    int i, tmn1 = 10, arraypequeno[tmn1];

    // Preenche o array com valores aleatórios
    for (i = 0; i < tmn1; i++) {
        arraypequeno[i] = rand() % 100;
    }

    // mostra o array antes da ordenação
    printf("Array pequeno original: ");
    printArray(arraypequeno, tmn1);

    // chama o selection sort para ordenar o array
    selectionSort(arraypequeno, tmn1);

    // printa o array depois da ordenação
    printf("Array pequeno organizado: ");
    printArray(arraypequeno, tmn1);

    return 0;
}
