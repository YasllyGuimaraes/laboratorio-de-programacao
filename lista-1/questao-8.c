/* 8) Escreva um programa que receba um valor inteiro e apresente o resultado do valor lido elevado ao
quadrado. */

#include <stdio.h>

int main(){

    int valor;

    puts("Digite um valor inteiro: ");
    scanf("%i", &valor);

    printf("%i ao quadrado = %i", valor, valor * valor);
}