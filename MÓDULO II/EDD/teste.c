#include <stdio.h>

void saudacao(){
    printf("Olá! Bem-vindo à programação em C!\n");
}
int soma(){
    int a, b;
    printf("Digite o valor de a: ");
        scanf("%d", &a);
    printf("Digite o valor de b: ");
        scanf("%d", &b);
    return a+b;
}
int quadrado(){
    int a;
    printf("Digite o valor que você quer receber o quadrado: ");
    scanf("%d", &a);
    return a*a;
}
float ConverterCelsiusEmFarenheint(){
    float celsius;
    printf("Digite o valor para converter para farenheint:");
    scanf("%f", &celsius);
    celsius = (celsius*1.8) +32;
    return celsius;
}
int main(){
    int sum, quad;
    float farenheint;
    saudacao();
    sum = soma();
    printf("O resultado é: %d\n", sum);
    quad = quadrado();
    printf("O quadrado desse número é: %d\n", quad);
    farenheint=ConverterCelsiusEmFarenheint();
    printf("O valor convertido é de: %d\n", farenheint);
    
    return 0;
    
}