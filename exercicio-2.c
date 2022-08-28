/* 2) Declare duas variáveis (int a = 3, b = 2;) e troque os valores armazenados nelas, de forma que
a variável a contenha o valor da variável b e vice-versa (Obs: use a operação de atribuição, logicamente).*/

#include <stdio.h>

int main(){

    int a = 3, b = 2, aux = 0;

    printf("Valores iniciais: \n");
    printf("Valor de a: %i \n", a);
    printf("Valor de b: %i \n", b);

    printf("Trocando os valores: \n");

    aux = a;
    a = b;
    b = aux;

    printf("Valor de a: %i \n", a);
    printf("Valor de b: %i \n", b);

    return 0;
}
/* Para conseguir inverter as variáveis foi necessário criar uma variável auxiliar. Pois se apenas
 invertermos a = b e b = a, o primeiro valor atribuido vai se repetir. ex: a=2, b=2. */ 