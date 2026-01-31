
#include <stdio.h>
#include <stdlib.h>

void questao1(void){
    int i, j, matriz3[3][3];
    printf("Questao 1\n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++){
            printf("Digite o elemento de posição:[%d][%d] da matriz: ", i, j);
            scanf("%d", &matriz3[i][j]);
        }
    printf("Matriz:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++) printf("%4d", matriz3[i][j]);
        printf("\n");
    }
}

void questao2(void){
    int i, j, soma = 0, matriz2[2][2];
    printf("Questao 2\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("Digite o elemento de posição:[%d][%d] da matriz: ", i, j);
            scanf("%d", &matriz2[i][j]);
            soma += matriz2[i][j];
        }
    printf("A soma desses elementos é: %d\n", soma);
}
}
void questao3(void){
    int i, j, matriz3[3][3];
    printf("Questao 3\n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++){
            printf("Digite o elemento de posição:[%d][%d] da matriz: ", i, j);
            scanf("%d", &matriz3[i][j]);
        }
    printf("Diagonal principal:\n");
    for(i=0;i<3;i++) printf("%4d\n", matriz3[i][i]);
}

void questao4(void){
    int i, j, matriz3[3][3], soma = 0;
    printf("Questao 4\n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++){
            printf("Digite o elemento de posição:[%d][%d] da matriz: ", i, j);
            scanf("%d", &matriz3[i][j]);
        }
    printf("Diagonal secundaria:\n");
    for(i=0;i<3;i++){
        int j = 2 - i;
        printf("%4d\n", matriz3[i][j]);
        soma += matriz3[i][j];
    }
    printf("A soma dos números da diagonal secundária é: %d\n", soma);
}

void questao5(void){
    int i, j, pares=0, matriz4[4][4];
    printf("Questao 5\n");
    for(i=0;i<4;i++)
        for(j=0;j<4;j++){
            printf("Digite o elemento de posição:[%d][%d] da matriz: ", i, j);
            scanf("%d", &matriz4[i][j]);
            if (matriz4[i][j] % 2 == 0) pares++;
        }
    printf("Matriz 4x4:\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++) printf("%4d", matriz4[i][j]);
        printf("\n");
    }
    printf("Existem %d números pares nessa matriz.\n", pares);
}

void questao6(void){
    int i, j, matriz3[3][3], maior, menor;
    printf("Questao 6\n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++){
            printf("Digite o elemento de posição:[%d][%d] da matriz: ", i, j);
            scanf("%d", &matriz3[i][j]);
        }
    maior = menor = matriz3[0][0];
    for(i=0;i<3;i++)
        for(j=0;j<3;j++){
            if (matriz3[i][j] > maior) maior = matriz3[i][j];
            if (matriz3[i][j] < menor) menor = matriz3[i][j];
        }
    printf("O maior número e o menor número dessa matriz são respectivamente: %d e %d\n", maior, menor);
}

void questao7(void){
    int i, j, matriz3[3][3];
    printf("Questao 7\n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++){
            printf("Digite o elemento de posição:[%d][%d] da matriz: ", i, j);
            scanf("%d", &matriz3[i][j]);
        }
    printf("Matriz:\n");
    for(i=0;i<3;i++){
        int somalinha = 0, somacoluna = 0;
        for(j=0;j<3;j++) {
            printf("%4d", matriz3[i][j]);
            somalinha += matriz3[i][j];
        }
        for(j=0;j<3;j++) somacoluna += matriz3[j][i];
        printf("\nA soma da linha[%d] é: %d\n", i, somalinha);
        printf("A soma da coluna[%d] é: %d\n", i, somacoluna);
    }
}

void questao8(void){
    int i, j, matriz3X2[3][2], matriz2X3[2][3];
    printf("Questao 8\n");
    for(i=0;i<3;i++)
        for(j=0;j<2;j++){
            printf("Digite o elemento de posição:[%d][%d] da matriz 3x2: ", i, j);
            scanf("%d", &matriz3X2[i][j]);
        }
    printf("Matriz 3x2:\n");
    for(i=0;i<3;i++){
        for(j=0;j<2;j++) printf("%4d", matriz3X2[i][j]);
        printf("\n");
    }
    for(i=0;i<2;i++)
        for(j=0;j<3;j++)
            matriz2X3[i][j] = matriz3X2[j][i];
    printf("Matriz 2x3 (transposta):\n");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++) printf("%4d", matriz2X3[i][j]);
        printf("\n");
    }
}

void questao9(void){
    printf("\nQuestão 9\n");
    int i, j, k, matriz2X2_1[2][2], matriz2X2_2[2][2], matrizproduto[2][2];
     for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("Digite o elemento de posição:[%d][%d] da primeira matriz: ", i, j);
            scanf("%d", &matriz2X2_1[i][j]);
        }
    }
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("Digite o elemento de posição:[%d][%d] da segunda matriz: ", i, j);
            scanf("%d", &matriz2X2_2[i][j]);
        }
    }
    
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            matrizproduto[i][j]=0;
            for (k=0;k<2;k++){
                matrizproduto[i][j] += (matriz2X2_1[i][k]*matriz2X2_2[k][j]);
            }
        }
        
       
    }
    printf("\nMatriz produto:\n");
    for(i=0;i<2;i++){
        printf("\n");
        for(j=0;j<2;j++){
            printf("%3d", matrizproduto[i][j]);
        }
    }


} 
void questao10(void){
     printf("\nQuestão 10\n");
    int i, j, k, matriz3X3_1[3][3], matriz3X3_2[3][3], matrizsoma[3][3];
     for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Digite o elemento de posição:[%d][%d] da primeira matriz: ", i, j);
            scanf("%d", &matriz3X3_1[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Digite o elemento de posição:[%d][%d] da segunda matriz: ", i, j);
            scanf("%d", &matriz3X3_2[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            matrizsoma[i][j]=0;
           matrizsoma[i][j]+=matriz3X3_1[i][j]+matriz3X3_2[i][j];
        }
    }
    printf("\nMatriz soma:\n");
    for(i=0;i<3;i++){
        printf("\n");
        for(j=0;j<3;j++){
            printf("%3d", matrizsoma[i][j]);
        }
    }
    
    printf("\n");

}
void questao11(void){
    
    printf("\nQuestão 11\n");
    int i, j, matriz4[4][4],iatual=0, jatual=0;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("Digite o elemento de posição:[%d][%d] da matriz: ", i, j);
            scanf("%d", &matriz4[i][j]);
        }
    }
    printf("Matriz 4x4:\n");
  
    for(i=0;i<4;i++){
        printf("\n");
        for(j=0;j<4;j++){ 
            printf("%4d", matriz4[i][j]);
        }
        
    }
    printf("\n");
    for(i=0;i<3;i++){
        for(j=1;j<4;j++){
            if (j>i)
            {
                printf("%4d", matriz4[i][j]);
            }
            
            
        }
        
    }
    
printf("\n");

}
void questao12(void){
    int i, j, soma = 0, matriz3[3][3];
    printf("Questao 12\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Digite o elemento de posição:[%d][%d] da matriz: ", i, j);
            scanf("%d", &matriz3[i][j]);
            soma += matriz3[i][j];
        }
    
}
    printf("A média desses elementos é de:%d", soma/9);
    printf("\n");
}
void questao13(void){
    int i, j, matriz3[3][3];
    printf("Questao 13\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Digite o elemento de posição:[%d][%d] da matriz: ", i, j);
            scanf("%d", &matriz3[i][j]);
        }
    }
     
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){ 
            if (matriz3[i][j]<0)
            {
                matriz3[i][j]=0;
            }
            

            }
        printf("\n");
    }
    printf("Matriz:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++) printf("%4d", matriz3[i][j]);
        printf("\n");
    }


}
void questao14(void){
    printf("\nQuestão 14\n");
    int i, j, matriz4[4][4],somalinha2=0,somalinha4=0;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("Digite o elemento de posição:[%d][%d] da matriz: ", i, j);
            scanf("%d", &matriz4[i][j]);
        }
    }
    printf("Matriz:\n");
    for(i=0; i<4; i++){
        for(j=0;j<4;j++){
            printf("%4d", matriz4[i][j]);
        }
    }
    for(i=0; i<4; i++){
        for(j=0;j<4;j++){
            if (i==1)
            {
                somalinha2+=matriz4[i][j];
            }
            if (i==3)
            {
                somalinha4+=matriz4[i][j];
            }
            
        }
    }
    printf("\nA soma dos elementos da 2ª linha é de:%d", somalinha2);
    printf("\nA soma dos elementos da 4ª linha é de:%d\n", somalinha4);
}





int main(void){
    /*questao1();
    questao2();
    questao3();
    questao4();
    questao5();
    questao6();
    questao7();
    questao8();
    questao9();
    questao10();*/
    questao11();
    questao12();
    questao13();
    questao14();


    return 0;
}
