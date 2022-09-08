/* 11) Elabore um programa que apresente o valor da conversão em dólar de um valor lido em real. O
programa deve solicitar o valor da cotação do dólar e também a quantidade de reais que o usuário
deseja converter. */

#include <stdio.h>

int main(){

    float cotacao, real, dolar;

    puts("Valor da cotacao atual: ");
    scanf("%f", &cotacao);

    puts("Valor em Real que deseja converter: ");
    scanf("%f", &real);

    dolar = real / cotacao;

    printf("Valor da conversao em dolar: %.2f", dolar);

    return 0;
}