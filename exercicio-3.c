/* 3) Extrapole o valor limite de variáveis do tipo inteiro. Exemplo: short int i = 32767; i = i + 1;.
Imprima o resultado e veja o que acontece. */

#include <stdio.h>

int main(){

    short int i = 32767;
    i = i + 1;
    printf("Short int = %i \n", i);

}
/*Quando é posto um número que extrapole o valor limite, o número é posto como negativo,
 se for um número que esteja na faixa entre os negativos positivos*/