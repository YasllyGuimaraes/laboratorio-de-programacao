/* 5) Escreva um programa que pegue o valor de uma conta de restaurante e imprima o valor total a ser
pago, considerando que o restaurante cobra 10% de taxa para o garçom. */

#include <stdio.h>

int main(){

    float valor;

    puts("-----CONTA-----\n");
    puts("Valor da conta: \n");
    scanf("%f", &valor);

    valor = valor + (10 / 100) * valor;

    printf("O valor total da conta com os 10%% do garcom e: %.2f \n", valor);

    return 0;
}