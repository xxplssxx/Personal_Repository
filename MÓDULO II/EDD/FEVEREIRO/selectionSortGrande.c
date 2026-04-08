#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// selection sort grande

void selectionSort(int arr[], int n) {
    int i, j, min, temp;

    for (i = 0; i < n - 1; i++) {
        // Usa o menor elemento como o atual
        min = i;

        // Busca um valor menor nas posiçoes seguintes
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }

        // Realiza a troca
        temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}


    // Função auxiliar para mostrar o conteudo do array

void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    srand(time(NULL));

    // Array grande com 10.000 posiç~ões
    int i, tmn3 = 10000, arraygrande[tmn3];

    // Preenche o array com números aleatórios
    for (i = 0; i < tmn3; i++) {
        arraygrande[i] = rand() % 10000;
    }

    // Printa o array antes de ordenar
    printf("Array grande original: ");
    printArray(arraygrande, tmn3);

    // Ordena usando selection Sort
    selectionSort(arraygrande, tmn3);

    // Printa o array depois de ordenado
    printf("\n\nArray grande organizado: ");
    printArray(arraygrande, tmn3);

    return 0;
}
