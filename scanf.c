/* - Programa que coleta a idade de quem ta usando a máquina e informa a idade que foi lida pelo teclado, */

# include <stdio.h>

int main(){

    int idade = 0; //Criando uma região nova de memória chamada idade que vai guardar dados decimais do tipo inteiro, ela já começa valendo 0.

    printf("Digite uma idade:\n"); //Sempre colocar printf antes de um scanf para o usuário saber o que digitar.
    scanf("%d", &idade);

    printf("Idade informada: %d.\n", idade);

    return 0;

}