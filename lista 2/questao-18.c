/* 18) Escrever um programa que calcule e apresente o somatório do número de grãos de trigo que se pode
obter num tabuleiro de xadrez, obedecendo à seguinte regra: colocar um grão de trigo no primeiro
quadro e nos quadros seguintes o dobro do quadro anterior. Ou seja, no primeiro quadro coloca-se um
grão, no segundo quadro colocam-se dois grãos (tendo neste momento três grãos), no terceiro quadro
colocam-se quatro grãos (tendo neste momento sete grãos), no quarto quadro colocam-se oito grãos
(tendo-se então quinze grãos) atá atingir o sexagésimo quarto quadro. */

#include <stdio.h>

int main(){

    long long unsigned int soma, n_trigos;

    soma = 0;
    n_trigos = 1;

    for(int i = 1; i <= 64; i++){
        soma += n_trigos;
        
        n_trigos *= 2;

        printf("%llu\n", soma);
    }

printf("Somatorio dos graos dos trigo no tabuleiro de xadrez vale: %llu", soma);

    return 0;
} 
