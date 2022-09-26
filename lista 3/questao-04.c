/* 4) Faça um programa em C que leia duas strings do usuário e informe se elas são iguais. Faça uma
versão com o uso da funçao strcmp() e outra sem. */

#include <stdio.h>
#include <string.h>
#define TAM 20

int main(){

    char str1[TAM];
    char str2[TAM];
    int cont=0;

    printf("Digite a string 1:\n");
    scanf("%s", str1);
    printf("Digite a string 2:\n");
    scanf("%s", str2);
    
    for( i = 0; i<strlen(str1); i++){
        if (str1[i] == str2[i]){
            cont += 1;
        }
    } 

    if (cont == i){
        puts("Strings iguais");
    }
    
    else {
        puts("Strings diferentes");
    }

    return 0;
}