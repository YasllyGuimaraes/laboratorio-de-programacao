/* 2) Escreva um programa que troque o valor de dois números utilizando ponteiros. */

#include <stdio.h>

int main(){

    int a, b, aux;
    int *pa, *pb;

    pa = &a;
    pb = &b;
   
    printf("Digite o valor de a: \n");
    scanf("%d", pa);
    printf("Digite o valor de b: \n");
    scanf("%d", pb);

    aux = *pa;
    *pa = *pb;
    *pb = aux;

    printf("a = %d\n", *pa);
    printf("b = %d\n", *pb);

    return 0;
}













/*#include <assert.h>

void troca(int a, int b){
    int aux;

    aux = a*;
    a* = b*;
    b* = aux;
}

int main(){
    int a = 10;
    int b = 20;

    troca(&a, &b);

    assert(a == 20);
    assert(b == 10);

    return 0;
}*/