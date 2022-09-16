/* 27) Escreva um programa que receba vários números inteiros (em uma estrutura de laço) e apresente o
produto do maior pelo menor número apresentado. (Obs.: Não utilize vetores.) A condição de saída
do laço  ́e o usuário digitar um número negativo e par. */

#include <stdio.h>

int main(){

        int n, maior = 0, menor = 0, i = 1;


    do {

        printf("Digite um numero inteiro, para parar digite um numero negativo e par: \n");
        scanf("%i", &n);

        if( n > 0){
            if(i == 1){
                maior = n;
                menor = n;
            }
            else{
                if (n > maior){
                    maior = n;
                }
                if (n < menor){
                    menor = n;
                }
            }
        }
    i++;
    }while(!(n < 0 && n % 2 == 0));

printf("Maior numero: %i\nMenor numero: %i\nProduto: %i\n", maior, menor, maior*menor);

    return 0;
}
