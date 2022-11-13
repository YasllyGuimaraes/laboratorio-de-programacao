/* 4. Escreva um programa que leia um vetor do usuário e imprima seus valores e seus endereços. Teste
o vetor com tipos de dados diferentes, analise os endereços. O que você observou? */

#include <stdio.h>

#define TAM 5

int main(){
    int vetor[TAM];
    int *pvetor;

    for(int i=0; i<TAM; i++){
        printf("Digite o valor da posicao %d:\n", i);
        scanf("%d", &vetor[i]);
    }

    for(int i=0; i<TAM; i++){
        printf("%d ", vetor[i]);
    }

    for(int i=0; i <TAM; i++){
        pvetor = &vetor[i];
        printf("\nEndereco do elemento %d: %p", i, pvetor);
    }
    
    return 0;
}