/* 11) Refaça a questão 11, considerando que os limites da faixa (A e B) sejam fornecidos pelo usuário. O
programa deve funcionar tanto para A > B quanto para B > A. */

#include <stdio.h>

int main(){

    int a, b;

    puts("Especifique a faixa de numeros:\n");
    puts("De: \n");
    scanf("%i", &a);
    puts("Ate: \n");
    scanf("%i", &b);

    if (b > a){
        for (int i = a; i <= b; i++){
            if (i % 4 == 0){
                printf("%i \n", i * i);
            }
        }
    }

    else{
        for (int i = b; i <= a; i++){
            if (i % 4 == 0){
                printf("%i \n", i * i);
            }
        }
    }

    return 0;
}