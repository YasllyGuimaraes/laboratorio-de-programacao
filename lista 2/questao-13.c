/* 13) Elabore um programa que calcule o somatório de todos os números pares pertencentes a faixa A,B
especificada pelo usuário. O programa deve funcionar tanto para A > B quanto para B > A. */

#include <stdio.h>

int main(){

    int a, b, soma;

    puts("Especifique a faixa de numeros para fazer o somatório dos numeros pares:\n");
    puts("De: ");
    scanf("%i", &a);
    puts("Ate: ");
    scanf("%i", &b);

    if (b > a){
        for(int i = a; i <= b; i++){
            if (i % 2 == 0){
                soma += i;
            }
        }
    }

    else{
        for(int i = b; i <= a; i++){
            if( i % 2 == 0){
                soma += i;
            }
        }
    }

    printf("Somatorio dos numeros pares na faixa de %i a %i: %i\n", a, b, soma);
    return 0;
}
