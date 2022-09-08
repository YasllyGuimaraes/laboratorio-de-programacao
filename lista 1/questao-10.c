/* 10) Escreva um programa que calcule e apresente o valor do volume de um caixa retangular utilizando a
fórmula VOLUME = COMPRIMENTO * LARGURA * ALTURA. */

#include <stdio.h>

int main(){

    float comp, larg, alt, volume;

    puts("Digite o comprimento: ");
    scanf("%f", &comp);

    puts("Digite a largura: ");
    scanf("%f", &larg);

    puts("Digite a altura: ");
    scanf("%f", &alt);

    volume = comp * larg * alt;

    printf("Volume da caixa retangular: %.2f", volume);

    return 0;
}