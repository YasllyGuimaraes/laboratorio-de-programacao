/* 25) Escreva um programa que leia um tempo em segundos e imprima quantas horas, minutos e segundos
há neste tempo. */

#include <stdio.h>

int main(){

    int segundos, minutos, horas;

    puts("Digite o tempo em segundos: \n");
    scanf("%i", &segundos);

    horas = segundos / 3600;
    segundos -= horas * 3600;
    minutos = segundos / 60;
    segundos -= minutos * 60;

    printf("%i horas ", horas);
    printf("%i minutos ", minutos);
    printf("%i segundos ", segundos);

    return 0;
}
