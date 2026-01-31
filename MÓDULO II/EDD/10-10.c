#include <stdio.h>

int main(){
    int i, j;
    int matriz[3][3] = {{10,20,30},{40,50,60},{70,80,90}};
    

    for (i= 0; i<3 ; i++){
        printf("\n");
        for(j=0; j<3;j++){
            printf(" %d", matriz[i][j]);
            i++;
        }

    }

    
        

    return 0;
}