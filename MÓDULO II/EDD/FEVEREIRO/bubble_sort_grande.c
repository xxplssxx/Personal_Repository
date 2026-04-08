#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Organiza os vetores comparando elemento atual com próximo elemento.
void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Linhas 11, 12 e 13 realizam a troca de elementos se a condição for cumprida.
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
// Imprime o Vetor na tela, independente se ele está ordenado ou não.
void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    //Inicializa o Srand que auxilia na geração de vetores aleatórios
    srand(time(NULL));

    int i,tmn3 = 10000, arraygrande[tmn3];
    // Loop que preenche o vetor com valores aleatórios.
    for (i=0;i<tmn3; i++){
        arraygrande[i] = rand() % 10000;
    }

    printf("Array grande original: ");
    printArray(arraygrande, tmn3);
    //Ordenação por bubble sort.
    bubbleSort(arraygrande, tmn3);

    printf("Array grande organizado: ");
    printArray(arraygrande, tmn3);
   

    return 0;
}