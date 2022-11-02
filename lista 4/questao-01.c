/* 1) Escreva um programa que adicione dois números usando ponteiros. Além do valor da soma, imprima
também o endereço de memória onde o valor resultante dessa soma está armazenado. */

#include <stdio.h>

int main(){
    int a, b, soma;
    int *pa, *pb, *psoma;

    pa = &a;
    pb = &b;
    psoma = &soma;

    printf("Informe o valor de a: \n");
    scanf("%d", pa);

    printf("Informe o valor de b: \n");
    scanf("%d", pb);

    *psoma = *pa + *pb;

    printf("Soma: %d\nEndereco: %p\n", *psoma, psoma);

    return 0;
}