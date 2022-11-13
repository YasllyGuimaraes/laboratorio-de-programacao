/* 7) Escreva um programa que concatene duas strings utilizando ponteiros.*/

#include <stdio.h>
#include <string.h>

#define TAM 100

void concatenar(char *pstr1, char *pstr2);

int main(){
    char str1[TAM], str2[TAM];
    *pstr1 = str1, *pstr2 = str2;

    printf("Digite a string 1:\n");
    fgets(pstr1, TAM, stdin);

    printf("Digite a string 2:\n");
    fgets(pstr2, TAM, stdin);

    concatenar(pstr1, pstr2);

    return 0;
}

void concatenar(char *pstr1, char *pstr2){
    strcat(pstr1, pstr2);
}

