#include <stdio.h>

int contagem(int n){
    if(n==0){
        return 1;
    }
    contagem(n-1);
    printf("%d", n);
    return n;
}
int somapares(int n){
    if (n==0){
        return n;
    }
    if (n%2 == 0){
        return n+somapares(n-1);
    }
    somapares(n-1);
}
int contagemregressiva(int n){
    if (n==0){
        return 0;
    }
    printf("%d", n);
    contagemregressiva(n-1);
    
}

int potencia(int a, int n){
    if (n==1)
    {
        return a*1;
    }
    if (n>1){
        return a * potencia(a, n-1);
    }
    return potencia(a, n-1);
}
int Fibonnaci(int n){
    int numeros = 0;
    if (n==0){
        return 0;
    }
    if (n==1)
    {
        return 1;
    }
    else{
        return Fibonnaci(n-1) + Fibonnaci(n-2);
    }
    return Fibonnaci(n-1);
}

int main(){
    contagem(5);
    printf("\n");
    printf("%d", somapares(7));
    printf("\n");
    printf("%d",potencia(5,3));
    printf("\n");
    printf("%d", Fibonnaci(7));
    printf("\n");
    contagemregressiva(5);
    printf("\n");


    return 0;
}