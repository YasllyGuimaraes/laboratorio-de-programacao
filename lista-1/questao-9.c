/* 9) Escreva um programa que leia um valor numérico inteiro e apresente como resultado os seus valores
sucessor e antecessor. */

#include <stdio.h>

int main(){

    int valor;

    puts("Digite um valor inteiro: ");
    scanf("%i", &valor);

    printf("Valor sucessor: %i \n", valor + 1);
    printf("Valor antecessor: %i \n", valor - 1);

    return 0;
}