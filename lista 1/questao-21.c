/* 21) Escreva um programa que leia dois inteiros e então determine e imprima se o primeiro é 
múltiplo do segundo. Obs.: Não utilizar estrutura de decisão if. */

#include <stdio.h>

int main(){

        int n1, n2;

    puts("Digite o primeiro numero: ");
    scanf("%i", &n1);

    puts("Digite o segundo numero: ");
    scanf("%i", &n2);

    switch (n1 % n2){
        case 0:
        printf("O primeiro numero e multiplo do segundo.");
        break;

        default:
        printf("O primeiro numero NAO e multiplo do segundo.");
        break;
    }

    return 0;
}
