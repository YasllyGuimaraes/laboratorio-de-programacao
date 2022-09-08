/* 18) Escreva um programa que leia o raio de um círculo e imprima seu diâmetro, o valor de sua circunferência
e sua área. Use o valor de 3,14159 para ”pi”. Faça cada um destes cálculos dentro da instruções (ou
instruções) printf e use o especificador de conversão %f. */

#include <stdio.h>

    int main(){

        float raio, diametro, pi;

        pi = 3,14159;

        puts("Raio do circulo: ");
        scanf("%f", &raio);

        printf("Diametro: %.2f\n", 2 * raio);
        printf("Comprimento da circunferencia: %.2f\n", 2 * pi * raio);
        printf("Area da circunferencia: %.2f\n", pi * (raio * raio));

        return 0;
    }
