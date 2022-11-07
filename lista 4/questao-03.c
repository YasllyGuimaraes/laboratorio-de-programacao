/* 3) Escreva um programa que solicite iterativamente um número do usuario e imprima sempre o menor
valor fornecido. Crie um crit ́erio para finaliza çao do programa. Utilize ponteiros. */

#include <stdio.h>

int main(){
    int a, menor=0, i=0;
    int *pa;

    pa = &a;

    do{
        puts("Digite um numero:");
        scanf("%d", pa);

        if(i==0){
            menor = *pa;
        }
        else if(*pa == -1){
            break;
        }
        else if(*pa < menor){
            menor = *pa;
        }
        i++;
    }while(1);
    
    printf("Menor numero: %d", menor);

    return 0;
}
