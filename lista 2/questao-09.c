/* 09) A série de Fibonacci  ́e formada pela seguinte sequência: 1, 1, 2, 3, 5, 8, 13, 21, 34, 55... etc. Escreva
um algoritmo que gere a série de Fibonacci até o vigésimo termo. */

#include <stdio.h>

int main(){

    int a = 1, b = 1, c;

    printf("%i, ", a);
    printf("%i, ", b);

    for (int i = 1; i <= 20; i++){
        c = a + b;
        a = b;
        b = c;

        printf("%i, ", c);
    };

    return 0;
}