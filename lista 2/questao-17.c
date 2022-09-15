/* 17) Elaborar um programa que apresente os valores de conversão de graus Celsius em graus Fahrenheit,
de 10 em 10 graus, iniciando a contagem em dez graus Celsius e finalizando em cem graus Celsius. O
programa deve apresentar os valores das duas temperaturas. Obs.: Pesquise a fórmula de conversão. */

#include <stdio.h>

int main(){

    int c, f;

    for(c = 10; c <= 100; c += 10){
        f = (c * 9 / 5) + 32;
        printf("%i Celsius = %.1f Fahrenheit\n", c, (float)f);
    }
    return 0;
}