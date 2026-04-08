#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função que implementa a ordenação por inserção
void insertionSort(int arr[], int n) {    
    int i, key, j;    
    // Começando do segundo elemento (índice 1) até o final
    for (i = 1; i < n; i++) {        
        key = arr[i]; // O elemento atual que será "encaixado"
        j = i - 1;    

        // Move os elementos que são maiores que a key para uma posição à frente de sua posição atual
        while (j >= 0 && arr[j] > key) {            
            arr[j + 1] = arr[j]; // Faz o deslocamento para a direita
            j = j - 1;        
        }        
        arr[j + 1] = key; // Insere a chave na posição correta
    }
}
    
// Função utilitária para imprimir o array no terminal
void printArray(int arr[], int size) {    
    for (int i = 0; i < size; i++)        
        printf("%d ", arr[i]);    
    printf("\n");
}
    
int main() {    
    // Inicializa o gerador de números aleatórios com base no tempo atual
    srand(time(NULL));   

    int n = 100;
    int arr[n];      

    // Preenche o array com números aleatórios entre 0 e 99
    for (int i = 0; i < n; i++) {      
        arr[i] = rand() % 100;    
    }

    printf("--- Array Original ---\n");    
    printArray(arr, n);    

    // Chama o algoritmo de ordenação
    insertionSort(arr, n); 

    printf("\n--- Array Ordenado ---\n");    
    printArray(arr, n);   

    return 0;
}