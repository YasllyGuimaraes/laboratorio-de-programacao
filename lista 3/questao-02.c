/* 2) Faça um programa em C que leia uma string e um caractere do usuário e informe se a string de
entrada contém o caracter fornecido. */

#include <stdio.h>
#define TAM 20

int main(){

    char linha[TAM];
    char c;
    int total = 0;
    
    printf("Digite um caracter: \n");
    scanf("%c", &c);
    printf("Digite uma string:\n");
    scanf("%s", linha);

    for(int i = 0; i < TAM; i++){
          if(linha[i] == c){
            total += 1;
        }
    }

    printf("A string tem %d vezes o caractere %c", total, c);
 
    return 0;
}