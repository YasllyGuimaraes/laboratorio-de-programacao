/* 8) Escreva um programa que busque um caracter fornecido em uma string utilizando ponteiros.*/

#include <stdio.h>

#define TAM 100

int main(){

    char str[TAM], c, *pc;
    int cont = 0;
    
    pc = &c;

    printf("Digite uma string: ");
    fgets(str, TAM, stdin);

    printf("Digite o caractere que deseja procurar: ");
    scanf("%c", pc);

    for(int i = 0; i < str[i] != '\0'; i++){

        if(str[i] == c){
            cont += 1;      
        }   
    }
    printf("\nNessa string existem %i letra %c", cont, *pc);
    
    return 0;
}