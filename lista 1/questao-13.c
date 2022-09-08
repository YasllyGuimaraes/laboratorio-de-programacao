/* 13) Escreva um programa que leia duas variáveis A e B e efetue a troca dos valores. O objetivo ́e que a
variável A passe a conter o valor de B e a variável B passe a possuir o valor de A. Apresente os valores
após a efetivação do processamento da troca. */

#include <stdio.h>

int main(){

    int a, b;

    puts("Digite um valor para A: ");
    scanf("%i", &a);

    puts("Digite um valor para B: ");
    scanf("%i", &b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b; 

    printf("a = %i \n", a);
    printf("b = %i \n", b);

    return 0;
}