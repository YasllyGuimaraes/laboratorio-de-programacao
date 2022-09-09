/* 24) Escreva um programa que calcule o produto entre um valor dado x por 2 elevado a um valor dado n.
Obs.: Utilize operadores binários. */

#include <stdio.h>

int main(){

    int x, n;

    printf("Digite o valor de x: \n");
    scanf("%i", &x);

    printf("Digite o valor de n: \n");
    scanf("%i", &n);

    n = 1 << n;

    printf("Resultado: %i \n", x * n);
    
    return 0;
}
