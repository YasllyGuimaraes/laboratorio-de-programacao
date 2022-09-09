/* 23) Escreva um programa que receba a entrada de um número de três dígitos, separe o número em seus
dígitos componentes e reconstrua um número com os componentes na ordem inversa. Exemplo: para
entrada de 123, a resposta do programa seria 321. */

#include <stdio.h>

int main(){

    int num, inverso;

    puts("Digite um numero de tres digitos: \n");
    scanf("%i", &num);

    inverso = (num % 10) * 100 + (num % 100 - num % 10) + (num - (num % 100) )/ 100;

    printf("Esse numero na ordem inversa fica: %i \n", inverso);

    return 0;
}