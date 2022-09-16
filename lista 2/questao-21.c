/* 21) Um palíndromo é um número, ou frase textual, que pode ser lido da mesma forma da esquerda para
a direita e vice-versa. Por exemplo, cada um dos seguintes inteiros de cinco dígitos  ́e um palíndromo:
12321, 55555, 45554 e 11611. Escreva um programa que leia um inteiro de cinco dígitos e determine se
ele é ou não um palíndromo. [Dica: use os operadores de divisão e módulo para separar o número em
seus dígitos individuais.] */

#include <stdio.h>

int main(){

    int d, d1, d2, d3, d4, d5;

    printf("Digite um numero inteiro de 5 digitos para saber se e palindromo ou nao: \n");
    scanf("%i", &d);

    d1 = d / 10000;
    d2 = (d % 10000 ) / 1000;
    d3 = ((d % 10000) % 1000)/ 100;
    d4 = (((d % 10000) % 1000) % 100) / 10;
    d5 = ((((d % 10000) % 1000) % 100) % 10) / 1;

    if(d1 == d5 && d2 == d4){
        printf("O numero %i e PALINDROMO.\n", d);
    }

    else{
        printf("O numero %i NAO E PALINDROMO.\n", d);
    }
    
    return 0;
}