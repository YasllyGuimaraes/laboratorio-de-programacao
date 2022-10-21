/* 1) Escreva um programa que adicione dois números usando ponteiros. Além do valor da soma, imprima
também o endereço de memória onde o valor resultante dessa soma está armazenado. */

#include <stdio.h>

void somar(int *px, int *py, int *ps);
int main(){

    int x, y, s;
    int *qx = &x, *qy = &y, *qs = &s;
    
    printf("Digite os valores: \n");
    //scanf("%d%d", &x, &y);
    scanf("%d%d", qx, qy);

    //somar(&x, &y, &s);
    somar(qx, qy, qs);

    //printf("O resultado de [%p] %d +[%p] %d e: [%p] %d\n"&x, &y, &s x, y, s);
    printf("O resultado de [%p] %d +[%p] %d e: [%p] %d\n"qx, qy, qs x, y, s);

    return 0;
}

void somar(int *px, int *py, int *ps){
    *ps = *px + *py;
} 