/* 19) Elaborar um programa que apresente a média aritmética dos números inteiros existentes entre uma
faixa especificada pelo usuário. */

#include <stdio.h>

int main(){

    int a, b, soma = 0, q_valores = 0;
    float media;

    puts("Especifique a faixa de numeros para saber a media aritmetica:\n");
    puts("De: ");
    scanf("%i", &a);
    puts("Ate: ");
    scanf("%i", &b);

    if(b > a){
        for(int i = a; i <= b; i++){
            q_valores += 1;
            soma += i;
            media = (float) soma / q_valores;
        }
    }
    else{
        for(int i = b; i <= a; i++){
            q_valores += 1;
            soma += i;
            media = (float) soma / q_valores;
        }
    }
    
    printf("Media aritmetica na faixa de %i a %i: %.1f\n", a, b, media);

    return 0;
}