/* 17) Escrever um programa que receba um valor inteiro do usuário e apresente o seu valor absoluto (módulo).
Não utilize estrutura de decisão if. */

#include <stdio.h>
#include <math.h>

int main(){

    int valor;

    puts("Digite um valor inteiro para saber seu modulo: ");
    scanf("%i", &valor);

    valor = abs(valor); /*Módulo do valor*/ 

    printf("Modulo: %i", valor);

    return 0;
}
