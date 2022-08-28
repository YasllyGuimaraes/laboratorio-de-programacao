/* 1)Crie uma variável para cada um dos 5 tipos básicos e use sizeof(...)
 em conjunto com printf(...) para mostrar o tamanho dos tipos básicos em 
 C na arquitetura do seu computador.*/

 #include <stdio.h>

 int main(){

    printf("Caractere: %lu \n", sizeof(char));
    printf("Inteiro:   %lu \n", sizeof(int));
    printf("Float:     %lu \n", sizeof(float));
    printf("Short int: %lu \n", sizeof(short int));
    printf("Long int:  %lu \n", sizeof(long int));

    return 0;
 }
 