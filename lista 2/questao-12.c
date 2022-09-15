/* 12) Elaborar um programa que mostre os resultados da tabuada de um número inteiro qualquer, a qual
deve ser apresentada de acordo com sua forma tradicional. */

#include <stdio.h>

int main(){

    int i, x;

    puts("Digite um numero para saber a sua tabuada: \n");
    scanf("%i", &x);

    for (i = 0; i <= 10; i++){

        printf("%i x %i = %i \n", i, x, i*x);
    }

    return 0;
}