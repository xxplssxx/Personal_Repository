#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função para ordenar um array usando o algoritmo Ordenação por Seleção
void ordenacaoPorSelecao(int arr[], int n) {
    int i, j, indiceMinimo, temp;

    for (i = 0; i < n - 1; i++) {
        indiceMinimo = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[indiceMinimo]) {
                indiceMinimo = j;
            }
        }
        // Troca o elemento mínimo encontrado com o primeiro elemento
        temp = arr[indiceMinimo];
        arr[indiceMinimo] = arr[i];
        arr[i] = temp;
    }
}

// Função para imprimir os elementos de um array
void imprimirArray(int arr[], int tamanho) {
    int i;
    for (i = 0; i < tamanho; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Função para testar a ordenação com um array aleatório
void testarOrdenacaoComArrayAleatorio(int tamanho, const char *rotulo) {
    int *arr = (int *)malloc(tamanho * sizeof(int));
    
    for (int i = 0; i < tamanho; i++) {
        arr[i] = rand() % 1000;
    }
    
    printf("\n%s (%d elementos):\n", rotulo, tamanho);
    if (tamanho <= 10) {
        printf("Array original: ");
        imprimirArray(arr, tamanho);
    }
    
    ordenacaoPorSelecao(arr, tamanho);
    
    if (tamanho <= 10) {
        printf("Array ordenado: ");
        imprimirArray(arr, tamanho);
    } else {
        printf("Array ordenado (primeiros 10): ");
        imprimirArray(arr, 10);
    }
    
    free(arr);
}

int main() {
    srand(time(NULL));
    
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Array original: ");
    imprimirArray(arr, n);

    ordenacaoPorSelecao(arr, n);

    printf("Array ordenado: ");
    imprimirArray(arr, n);
    
    testarOrdenacaoComArrayAleatorio(10, "Pequeno");
    testarOrdenacaoComArrayAleatorio(500, "Médio");
    testarOrdenacaoComArrayAleatorio(5000, "Grande");

    return 0;
}
