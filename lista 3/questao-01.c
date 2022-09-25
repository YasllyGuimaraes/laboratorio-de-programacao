/* 1) Faça um programa em C que leia um vetor do tipo float com 15 elementos e apresente a soma do
menor e maior elemento do vetor fornecido. */

#include <stdio.h>
#define TAM 15
int main(){

    float vetor[TAM], maior, menor;

    for(int i = 0; i < 15; i++){
        printf("Insira um numero no vetor: \n");
        scanf("%f", &vetor[i]);

        if (i == 1){
            maior = vetor[0];
            menor = vetor[0];
        }

        else if(vetor[i] > maior){
            maior = vetor[i];
        }

        else if(vetor[i] < menor){
            menor = vetor[i];
        }

    }

printf("Maior : %.2f\n", maior );
printf("Menor : %.2f\n", menor );
printf("Soma  : %.2f\n", menor + maior);
    return 0;
}
