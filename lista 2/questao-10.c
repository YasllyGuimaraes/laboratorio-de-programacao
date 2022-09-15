/* 10) Elabore um programa que apresente os quadrados dos números inteiros múltiplos de 4 existentes na
faixa de valores de 15 a 90. */

#include <stdio.h>

int main(){

    int x;

    for (x >= 15; x <= 90; x++){

        if (x % 4 == 0){
            printf("%i \n", x * x);
        }
    }
    return 0;
}
