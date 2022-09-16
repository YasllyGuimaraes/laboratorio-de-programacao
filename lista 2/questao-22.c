/* 22) Escreva um programa que leia um número inteiro e determine e imprima quantos dígitos no inteiro são
algarismos 7. */

#include <stdio.h>

int main(){

    int num, total;

    printf("Digite um numero inteiro: \n");
    scanf("%i", &num);

    do{
        if(num % 10 == 7){
            total += 1;
        }
        num /= 10;
    }while( num != 0);

printf("O numero inteiro tem %i numeros 7. \n", total);

    return 0;
}
