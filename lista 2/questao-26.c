/* 26) Escreva um programa que imprima uma tabela dos equivalentes binário, octal e hexadecimal dos
números decimais no intervalo de 1 a 256. */

#include <stdio.h>

int main(){

    int d, i, n;
    printf("Digite um numero de 1 a 256: \n");
    scanf("%i", &n);

    printf("Binario: ");
    for(i = 31; i >= 0; i--){

        d = n >> i;
    
        if(d & 1){
            printf("1");
        }
        else{
            printf("0");
        }

    }
    printf("\nOctal: %o\n",  d);
    printf("Hexadecimal: %x", d);

    return 0;
}
