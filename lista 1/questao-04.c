/* 4) Sabendo que os argumentos da função ”printf” podem ser expressões (a+b, a/b, a*b...), e não somente
argumentos, faça um programa capaz de ler um valor inteiro X e escrever seu triplo, seu quadrado, e
seu meio. */

#include <stdio.h>

int main(){

    int x;

    printf("Digite um valor inteiro: \n", x);
    scanf("%i", &x);

    printf("Triplo do valor: %i \n", x * 3);
    printf("Quadrado do valor: %i \n", x * x);
    printf("Metade do valor: %i \n", x / 2);

    return 0;
}