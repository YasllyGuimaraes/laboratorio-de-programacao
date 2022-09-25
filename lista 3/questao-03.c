/* 3) Faça um programa em C que leia uma string do usuário e informe a quantidade de caracteres da
string fornecida. Não use a função strlen(). */

#include <stdio.h>
#define TAM 20

int main(){

    char linha[TAM];
    int total = 0;

    printf("Digite uma string: \n");
    
    for(int i = 0; linha[i] != '\n'; i++){
        
        linha[i] = getchar();
        
        if(linha[i] == '\n'){ 
            break;
        }

        total += 1;
    } 

    printf("Quantidade de caracteres da string: %d", total);
    return 0;
} 
