/* 22) A linguagem C pode representar letras maiúsculas, letras minúsculas e uma grande variedade de
símbolos especiais. O C usa internamente pequenos inteiros para representar cada caractere diferente.
O conjunto de caracteres que um computador utiliza e as representações dos números inteiros corres-
pondentes àqueles caracteres é chamado conjunto de caracteres do computador. Você pode imprimir
o número inteiro equivalente à letra maiúscula A, por exemplo, executando a instrução

                                  printf(”%d”, ’A’);

Escreva um programa em C que imprima os inteiros equivalentes a algumas letras maiúsculas, letras
minúsculas e símbolos especiais. No mínimo, determine os números inteiros equivalentes ao conjunto
seguinte: A BCabc 0 12 $ * + / e o caractere espaço em branco. */

#include <stdio.h>

int main(){



    printf("Numero inteiro esquivalente a 'A': %d \n", 'A');
    printf("Numero inteiro esquivalente a 'B': %d \n", 'B');
    printf("Numero inteiro esquivalente a 'C': %d \n", 'C');
    printf("Numero inteiro esquivalente a 'a': %d \n", 'a');
    printf("Numero inteiro esquivalente a 'b': %d \n", 'b');
    printf("Numero inteiro esquivalente a 'c': %d \n", 'c');
    printf("Numero inteiro esquivalente a '0': %d \n", '0');
    printf("Numero inteiro esquivalente a '1': %d \n", '1');
    printf("Numero inteiro esquivalente a '2': %d \n", '2');
    printf("Numero inteiro esquivalente a '$': %d \n", '$');
    printf("Numero inteiro esquivalente a '+': %d \n", '+');
    printf("Numero inteiro esquivalente a '/': %d \n", '/');
    printf("Numero inteiro esquivalente a 'SPACE': %d \n", ' ');

    return 0;
}