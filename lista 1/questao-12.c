/* 12) Escreva um programa que peça ao usuário para digitar dois números, obtenha-os do usuário e imprima
a soma, o produto, a diferença, o quociente e o resto da divisão dos dois números. */

#include <stdio.h>

int main(){

    int x, y;
    float div;

    puts("Digite um numero: ");
    scanf("%i", &x);

    puts("Digite outro numero: ");
    scanf("%i", &y);

    div = (float) x / y;
    
    printf("Soma: %i \n", x + y);
    printf("Produto: %i \n", x * y);
    printf("Diferenca: %i \n", x - y);
    printf("Quociente: %.2f \n", div);
    printf("Resto da divisao: %i \n", x % y);

    return 0;
}