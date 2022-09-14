/* 07) Para que a divisão entre 2 números possa ser realizada, o divisor não pode ser nulo (zero). Escreva
um programa para ler 2 valores e imprimir o resultado da divisão do primeiro pelo segundo. OBS: O
programa deve validar a leitura do segundo valor (que não deve ser nulo). Enquanto for fornecido um
valor nulo a leitura deve ser repetida. */

#include <stdio.h>

    int main(){

        int valor1, valor2;

        printf("Digite o primeiro valor: \n");
        scanf("%i", &valor1);

        do{
            printf("Digite o segundo valor: \n");
            scanf("%i", &valor2);
        }while(valor2 == 0);

        printf("O resultado da divisao entre %i e %i : %.2f", valor1, valor2, (float) valor1 / valor2);

        return 0;
    }
