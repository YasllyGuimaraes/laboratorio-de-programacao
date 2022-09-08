/* 20) Escreva um programa que receba um número inteiro e então determine e imprima se ele  ́e par ou  ́ımpar.
Obs.: Não utilizar estrutura de decisão if. */

#include <stdio.h>

int main(){

    int valor;

    puts("Digite um valor para saber se e par ou impar: ");
    scanf("%i", &valor);

    switch (valor % 2){
        case 0:
        printf("PAR");
        break;

        default:
        printf("IMPAR");
        break;
    }

    return 0;
}
