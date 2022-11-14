/* 9) Implemente o método de ordenação bolha utilizando ponteiros.*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define TAM 6
#define INI 1
#define FIM 20

void vetor_aleatorio(int *vetor, int n, int inicio, int final);
void imprimir_vetor(int *vetor, int n);
void ordenar_vetor(int *vetor, int n);

int main(){
    int vet[TAM], *vetor = vet;
    
    printf("Vetor aleatorio: \n");
    vetor_aleatorio(vet, TAM, INI, FIM);
    imprimir_vetor(vet, TAM);
    ordenar_vetor(vet, TAM);

    printf("Vetor ordenado: \n");
    for(int i=0; i<TAM; i++){
    printf("%d ", vet[i]);
    }

    return 0;
}

void vetor_aleatorio(int *vetor, int n, int inicio, int final){
    srand(time(NULL));
    for(int i=0; i<n; i++){
        *(vetor + i) = inicio + rand() % final;
    }
}

void imprimir_vetor(int *vetor, int n){
    for(int i=0; i<n; i++){
        printf("%d ", *(vetor+i));
    }
    printf("\n");
}

void ordenar_vetor(int *vetor, int n){
    int aux;
    for(int i=0; i<n; i++){
        for(int j=0; j<n-1-i; j++){
            if(*(vetor+j) > *(vetor+j+1)){
                aux = *(vetor+j);
                *(vetor+j) = *(vetor+j+1);
                *(vetor+j+1) = aux;
            }
        }
    }
}