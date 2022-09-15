/* 14) Elabore um programa que apresente a quantidade de números divisíveis por 3 pertencentes a faixa
A,B especificada pelo usuário. O programa deve funcionar tanto para A > B quanto para B > A. */

#include <stdio.h>

int main(){

    int a, b, soma;

    puts("Especifique a faixa de numeros para saber os numeros divisiveis por 3:\n");
    puts("De: ");
    scanf("%i", &a);
    puts("Ate: ");
    scanf("%i", &b);

    if (b > a){
        for(int i = a; i <= b; i++){
            if (i % 3 == 0){
                printf("%i\n", i);
            }
        }
    }

    else{
        for(int i = b; i <= a; i++){
            if(i % 3 == 0){
                printf("%i\n", i);
            }
        }
    }

    return 0;
}