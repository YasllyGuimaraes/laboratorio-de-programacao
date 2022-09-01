// 3) Faça um programa capaz de ler um valor real e escrevê-lo com apenas uma casa decimal.

#include <stdio.h>

int main(){ 

    float f;

    puts("Digite um valor: "); // usado para digitar apenas uma string, sem formatação.

    scanf("%f", &f);

    printf("Valor recebido: %.1f \n", f);// .1f indica que vai ser imprimido com 1 casa decimal.

    return 0;
}