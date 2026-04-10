#include <stdio.h>
int main() {
    int x = 10;
    int *p;
    p = &x;

    printf("Valor de x: %d\n", x);
    printf("Endereco de x: %p\n", &x);

    printf("Valor de p (endereco): %p\n", p);
    printf("Valor apontado por p: %d\n", *p);
    printf("Valor apontado por p: %p\n", &p);

    return 0;
}

//“Ponteiro guarda referência para um.
//* acessa o valor.
//& pega o endereço.”