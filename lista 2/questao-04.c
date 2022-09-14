/* 04) Implementar um programa para resolver o seguinte problema: José tem 150 centímetros e cresce 2
centímetros por ano. O Pedro tem 110 centímetros e cresce 3 centímetros por ano. Em quantos anos
Pedro será maior que José? */

#include <stdio.h>

int main(){

    int jose, pedro, anos;

    jose = 150;
    pedro = 110;
    anos = 0;

    do {
        jose += 2;
        pedro += 3;
        anos += 1;

    } while (jose >= pedro);

    printf("Pedro sera maior que Jose em %i anos.", anos);

    return 0;
}
