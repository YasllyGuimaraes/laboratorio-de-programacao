/* 06) Escreva um programa que transforme o computador numa urna eletrônica para eleição para presidente
de um certo país, às quais concorrem os candidatos 5-Paulo e 7-Renata. Cada voto deve ser dado pelo
número do candidato, permitindo-se ainda o voto 0 para voto em branco. Qualquer voto diferente dos
já citados é considerado nulo; em qualquer situação, o eleitor deve ser consultado quanto à confirmação
do seu voto. No final da eleição o programa deve emitir um relatório contendo as porcentagens de
votação de cada candidato, votos em branco, votos nulos e o candidato eleito. Obs.: O código para
finalizar a urna (votação) ́e o usuário digitar algum número negativo. */

#include <stdio.h>

int main(){

    int voto, tot_votos, p,  r,  branco, nulo; 
    char opcao;

    tot_votos = 0;
    p = 0;
    r = 0;
    branco = 0;
    nulo = 0;
    

    while(voto >= 0){

        printf("Opcoes de voto: \n");
        printf("Digite 5 para votar em Paulo. \n");
        printf("Digite 7 para votar em Renata. \n");
        scanf("%i", &voto);
        printf("CONFIRMA? [S/N]: \n");
        scanf(" %c", &opcao);

    if (opcao == 'S'){

            if (voto == 5){
                printf("Voce votou em Paulo.\n");
                p +=1;
            }

            else if (voto == 7){
                printf("Voce votou em Renata.\n");
                r += 1;
            }

            else if (voto == 0){
                printf("Voce votou em Branco.\n");
                branco += 1;
            }

            else if (voto < 0){
                printf("Votacao encerrada.\n");
            }

            else{
                printf("Voce votou Nulo.\n");
                nulo += 1;
            }

            tot_votos += 1;
            }
    
    else{
        printf("Digite a opcao de voto correta!\n");
    }
    }
            
    printf("RESULTADO DAS ELEICOES: \n");
    printf("Total de votos: %i \n", tot_votos - 1);
    printf("BRANCOS: %.2f%% \n", (float) branco / tot_votos * 100);
    printf("NULOS: %.2f%% \n", (float) nulo / tot_votos * 100);
    printf("PAULO: %.2f%% \n", (float) p / tot_votos * 100);
    printf("RENATA: %.2f%% \n", (float) r / tot_votos * 100);   

    if (p > r){
        printf("Paulo venceu as eleicoes! \n");
    }

    else if (r > p){
        printf("Renata venceu as eleicoes! \n");
    }
    else{
        printf("Nenhum candidato venceu!");
    }

    return 0;
}
