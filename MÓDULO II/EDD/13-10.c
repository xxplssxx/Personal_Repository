#include <stdio.h>
#include <stdlib.h>

int main(){
int matriz[2][2], i, j, soma;
printf("Digite os valores da matriz:\n");
    for(i=0; i<2; i++){
        for (j = 0; j < 2; j++)
        {
           printf("Posição [%d][%d]", i, j);

           scanf("%d", &matriz[i][j]);
        }
        
    }
    for(i=0; i<2; i++){
        printf("\n");
        for (j = 0; j < 2; j++)
        {
           printf("Elemento[%d][%d]: %d ",i,j, matriz[i][j]);
        }
        
    }
    for(i=0; i<2; i++){
        
        for (j = 0; j < 2; j++)
        {
           soma+= matriz[i][j];
           printf("Soma está em: %d\n", soma);
        }
        
    }
    printf("\n");

return 0;


}