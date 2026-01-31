#include <stdio.h>

void saudacao(){
    printf("Olá! Bem-vindo à programação em C!\n");
}

float soma(){
    float a, b;
    printf("Digite o valor de a: ");
        scanf("%f", &a);
    printf("Digite o valor de b: ");
        scanf("%f", &b);
    return a+b;
}
float subtracao(){
    float a, b;
    printf("Digite o valor de a: ");
        scanf("%f", &a);
    printf("Digite o valor de b: ");
        scanf("%f", &b);
    return a-b;
}
float multiplicacao(){
    float a, b;
    printf("Digite o valor de a: ");
        scanf("%f", &a);
    printf("Digite o valor de b: ");
        scanf("%f", &b);
    return a*b;
}
float divisao(){
    float a, b;
    printf("Digite o valor de a: ");
        scanf("%f", &a);
    printf("Digite o valor de b: ");
        scanf("%f", &b);
    return a/b;
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

float MédiaAritmetica(){
    float n1, n2, n3;
    printf("Digite o número 1: ");
    scanf("%f", &n1);
    printf("Digite o número 2: ");
    scanf("%f", &n2);
    printf("Digite o número 3: ");
    scanf("%f", &n3);
    return (n1+n2+n3) / 3;
}





int main(){
    int quad, opcao;
    float sum, farenheint, media;
    ConverterCelsiusEmFarenheint(32);
    
    saudacao();
    sum = soma();
    printf("O resultado é: %.2f\n", sum);
    quad = quadrado();
    printf("O quadrado desse número é: %d\n", quad);
    farenheint=ConverterCelsiusEmFarenheint();
    printf("O valor convertido é de: %.2f\n", farenheint);
    media = MédiaAritmetica();
    printf ("A média é de: %.2f\n", media);
    do
    {   float result;
        printf("Escolha uma opção:\n1 - Somar\n2 - Subtrair\n3 - Multiplicar\n4 - Dividir\n 0 - Sair\n");
        scanf("%d", &opcao);
        switch (opcao)
    {
    case 1:
        result = soma();
        printf("O resultado é: %.2f\n", result);
        break;
    
    case 2:
        result = subtracao();
        printf("O resultado é: %.2f\n", result);
        break;

    case 3:
        result = multiplicacao();
        printf("O resultado é: %.2f\n", result);
        break;
    case 4:
        result = divisao();
        printf("O resultado é: %.2f\n", result);
        break;
    default:
        break;
    }
    } while (opcao!=0);
    
    
    return 0;
    
}