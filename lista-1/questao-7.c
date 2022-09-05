/* 7) Faça um programa que leia uma quantidade de horas, minutos e segundos e imprima o total de segundos. */

#include <stdio.h>

int main(){

    int horas, minutos, segundos;
    
    puts("Quantidade de horas: ");
    scanf("%i", &horas);

    horas = horas * 3600;

    puts("Quantidade de minutos: ");
    scanf("%i", &minutos);

    minutos = minutos * 60;

    puts("Quantidade de segundos: ");
    scanf("%i", &segundos);

    printf("Total de segundos: %i", horas + minutos + segundos);

    return 0;
}