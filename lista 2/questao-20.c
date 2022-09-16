/* 20) Construir um programa que apresente como resultado o fatorial dos valores ímpares situados na faixa
número de 1 a 10. */

#include <stdio.h>

int main(){

    int fatorial;

    for(int i = 1; i <= 10; i++){
        if(i % 2 == 1){
            fatorial = 1;

            for(int x = i; x >= 1; x--){
                fatorial *= x;
            }
            
            printf("Fatorial de %i = %i \n", i, fatorial);
        }
    }
    return 0;
}