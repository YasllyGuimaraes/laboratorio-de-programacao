/* 15) Elaborar um programa que apresente os resultados das potências do valor de base 3, elevado a um
expoente que varie do valor 0 a 7. */

#include <stdio.h>
#include <math.h>

int main(){

    for (int i = 0; i <= 7; i++){
        printf("3 elevado a %i: %.1f\n", i, pow((double)3, (double)i));
    }

    return 0;
}