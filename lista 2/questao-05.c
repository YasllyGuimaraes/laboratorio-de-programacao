/* 05) Fazer um programa que receba um valor n no teclado e determine o maior e o menor termo fornecido.
A condição de termino do programa é quando o usuário digitar zero. */

#include <stdio.h>

int main(){

        int n, maior, menor;

    do {

        puts("Digite um numero ou se quiser parar digite 0 : ");
        scanf("%i", &n);

        if(n > maior) {
            maior = n;
        }

        else if ((n < menor) && (n != 0)) {
            menor = n;
        }
     
    } while (n != 0);

    printf("O maior numero digitado foi %i.\n", maior);
    printf("O menor numero digitado foi %i.\n", menor);

    return 0;
}
