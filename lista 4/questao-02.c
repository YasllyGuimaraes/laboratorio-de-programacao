/* 2) Escreva um programa que troque o valor de dois números utilizando ponteiros. */

#include <stdio.h>
#include <assert.h>

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
}