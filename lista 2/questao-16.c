/* 16) Escreva um programa que apresente o somatório de todos os números divisíveis por 3 pertencentes ao
intervalo [0,100] e o somatório de todos os números divisíveis por 5 pertencentes ao intervalo ]100,200].
Obs.: Utilize apenas um laço de repetição. */

#include <stdio.h>

int main(){

    int soma3, soma5;

    for(int i = 0 ; i <= 200; i++){
        if(i <= 100){
            if (i % 3 == 0){
                soma3 += i;
            }
        }
    
        if((i > 100)&&(i <= 200)){
            if (i % 5 == 0){
            soma5 += i;
            }
        }
    }

    printf("Somatorio dos numeros multiplos de 3 pertecentes ao intervalo [0, 100]: %i\n", soma3);
    printf("Somatorio dos numeros multiplos de 5 pertecentes ao intervalo ]100, 200]: %i\n", soma5);
    return 0;

    }

