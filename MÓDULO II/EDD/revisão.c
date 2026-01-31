#include <stdio.h>
#include <stdlib.h>
/* Questões de função 
Questão 1: Uma função em C é um bloco de código para realizar uma mesma ação várias vezes, precisando apenas
"chamar" a função depois e reutilizar linhas de código, sendo que essa é a principal vantagem de utilizar
funções, a reutilização de um código já escrito.
Questão 2: Uma função com retorno é a função que obrigatoriamente vai retornar algum valor após ser chamada, como por exemplo
uma função de converter celsius para farenheint que vai receber como parametro o valor em celsius, calcular
a conversão e retornar o valor convertido para farenheint. Já a função sem retorno é a função que não
retorna nenhum valor como por exemplo uma função para exibir uma mensagem padrão.
*/
/* Questão 3*/
int Quadrado(int num){
    return num*num;
}
int MaiorElemento(int a, int b, int c){
    if (a>=b && a>=c){
        return a;
    }
    if (b>=a && b>=c){
        return b;
    }
    return c;
}
float Mediaaritmetica(float nota1, float nota2, float nota3){
    return (nota1+nota2+nota3)/3;
}
float ConverterCelsius(float c){
    return (c*1.8)+32;
}
void Questao4(){
    int i, j, matriz[3][3];
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
        printf("Digite o valor da posição[%d][%d]", i, j);
        scanf("%d", &matriz[i][j]);
    }
    }
    for(i=0; i<3; i++){printf("\n");
        for(j=2; j>-1; j--){
            printf("%3d", matriz[i][j]);
            i++;
    }
    }
}



int main(){
    /*Questões de Função*/
    int i, j, matriz[3][3];
    printf("%2d", Quadrado(4));
    printf("\n%2d", MaiorElemento(1,2,3));
    printf("\n%2d", MaiorElemento(1,3,2));
    printf("\n%2d\n", MaiorElemento(3,1,2));
    printf("%.2f\n", Mediaaritmetica(9,8,9));
    printf("%.2f\n", ConverterCelsius(30));
  


    return 0;
}