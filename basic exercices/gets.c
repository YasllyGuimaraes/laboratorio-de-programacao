#include <stdio.h>

#define TAM 10

int main(){
    char str[TAM];

    //char *fgets(char *str, int n, FILE *stream)
    fgets(str,TAM,stdin);
    //scanf("%s", str);
    //scanf para a leitura dalinha quando encontra o espaço.
    //pesquisar como fazer a leitura de uma string utilizando scanf sem ter problemas.

    //gets(str);

    puts(str);

    puts("---");

    int i = 0;
        while(str[i] != '\0'){
            
        }

    return 0;
}
//gets - Não é legal de usar pois o usuário pode estrapolar a região de memoria. Não é seguro.