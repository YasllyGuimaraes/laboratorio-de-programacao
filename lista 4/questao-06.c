/* 6) Escreva um programa que copie uma string para outra usando ponteiros. */

#include <stdio.h>

#define TAM 100

void copia_str(char *copia, char *recebe);

int main(){

    char str1[TAM], str2[TAM];

    printf("Digite uma string: ");
    fgets(str1, TAM, stdin);

    copia_str(str1,str2);

    printf("copia da string: %s\n", str2);

    return 0;
}

void copia_str(char *copia, char *recebe){
    while(*copia != '\0'){
        *recebe = *copia;

        copia++;
        recebe++;
    }
    *recebe = '\0';
}