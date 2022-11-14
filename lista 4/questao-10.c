/* 10) Escreva um programa que gere um vetor X com n ́umeros pseudoaleat ́orios no intervalo [0,N − 1].
Crie um vetor F com N posi ̧c ̃oes e armazene em cada posi ̧c ̃ao de F a quantidade de ocorrˆencias
dos elementos de X. Exemplo:
Para N = 7, temos:

X = [4, 6, 2, 3, 2, 3, 0, 2, 5, 5, 2, 6, 0, 5]

Portanto,

F = [2, 0, 4, 2, 1, 3, 2] 

Observe que as ocorrˆencias dos elementos de X s ̃ao armazenadas em F nos  ́ındices de mesmo valor.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10
#define INI 1
#define FIM 20

void vetor_aleatorio(int *vetor, int n, int inicio, int final);
void imprimir_vetor(int *vetor; int n);
void contador_frequencia(int *vetor, int final, int *f, int tamanho);

int main(){

    int vet[TAM], *vetor = vet, f[FIM];

    vetor_aleatorio(vet, TAM, INI, FIM);
    printf("Vetor aleatorio: \n");
    imprimir_vetor(vet, TAM);

    printf("Vetor de frequencias: \n");
    contador_frequencia(vet, f, FIM);
    imprimir_vetor(vet, FIM, TAM);

    return 0;
}

void vetor_aleatorio(int *vetor, int n, int inicio, int final){
    srand(time(NULL));
    for(int i=0; i<n; i++){
        *(vetor+i) = inicio + rand() % final;
    }
}

void imprimir_vetor(int *vetor, int n){
    for(int i=0; i<n; i++){
        printf("%d ", *(vetor+i));
    }
    printf("\n");
}

void contador_frequencia(int *vetor, int final, int *f, int tamanho){
    int c = 0;
    for(int i=0; i< final; i++){
        for(int j=0; j< tamanho; j++){
            if(*(vetor+i) == *(vetor+j)){
                c++;
            }
        }
        *(f+i) = c;
        c=0;
    }
}
