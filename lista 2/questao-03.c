/* 03) Escreva um programa que leia um número inteiro e positivo F e calcule o fatorial deste número. */

#include <stdio.h>

int main(){

    int num, fatorial;

    printf("Digite um numero para saber seu fatorial: \n");
    scanf("%i", &num);

    for(fatorial = 1; num > 1; num = num - 1)
    fatorial = fatorial * num;

    printf("Fatorial: %i", fatorial);

    return 0;
}