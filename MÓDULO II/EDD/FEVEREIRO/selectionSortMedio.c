#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função Selection Sort
// Funciona selecionando o menor elemento do array e colocando ele na posição correta a cada iteração
void selectionSort(int arr[], int n) {
    int i, j, min, temp;

    for (i = 0; i < n - 1; i++) {
        min = i;

        // Procura o menor valor no resto do array
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }

        // Troca os valores
        temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}

    // Printa todos os valores do array

void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    srand(time(NULL));

    // Array de tamanho medio (1000 posições)
    int i, tmn2 = 1000, arraymedio[tmn2];

    // Preenchendo o array com números aleatórios
    for (i = 0; i < tmn2; i++) {
        arraymedio[i] = rand() % 1000;
    }

    // Print o array antes da ordenação
    printf("Array medio original: ");
    printArray(arraymedio, tmn2);

    // Ordena o array usando Selection Sort
    selectionSort(arraymedio, tmn2);

    // Printa o array já ordenado
    printf("\n\nArray medio organizado: ");
    printArray(arraymedio, tmn2);

    return 0;
}
