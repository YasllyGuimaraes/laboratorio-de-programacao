/* 23) Escreva um programa que mostre a diferença entre pré-incrementar e pós-incrementar usando o ope-
rador –. */

#include <stdio.h>

int main(){

    int x = 10;

    printf("Durante o pre-incremento: %i\n", ++x);
    printf("Depois do pre-incremento: %i \n", x);
    printf("Durante o pos-incremento: %i \n", x++);
    printf("Depois do pos-incremento: %i \n", x);

    return 0;
}