/* 5) Escreva um programa que encontre o tamanho de uma string fornecida. Utilize ponteiros. */

#include <stdio.h>
#include <string.h>

#define TAM 100

int main(){

    char str[TAM];
    int tamanho;
    int espaco = 0;
    
    printf("Digite algo:\n");
    fgets(str, TAM, stdin);

    for(tamanho=0; tamanho<TAM; tamanho++){
        if(str[tamanho] == ' '){
            espaco++;
            tamanho -=1;
        }
        else if(str[tamanho] == '\0'){
            tamanho--;
            tamanho -= 1;
            break;
        }
    }
    printf("A string fornecida tem %d caracteres.", tamanho);

    return 0;
}