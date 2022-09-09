/* 27) Escreva um programa que solicite 3 números em ponto flutuante e imprima a média aritmética e
geométrica. (Utilize a função pow(base, expoente) da biblioteca math.h). */

#include <stdio.h>
#include <math.h>

int main(){

    float x, y, z;
    puts("Digite 3 numeros para saber a media aritmetica e geometrica deles: \n");

    puts("Digite o primeiro numero: \n");
    scanf("%f", &x);

    puts("Digite o segundo numero: \n");
    scanf("%f", &y);

    puts("Digite o terceiro numero: \n");
    scanf("%f", &z);

    printf("Media Aritmetica: %.2f\n", (x + y + z) / 3);
    printf("Media Geometrica: %.2f\n", pow((x * y * z), 1.0 / 3.0));

    return 0;
}
