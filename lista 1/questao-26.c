/* 26) Fazer um programa para ler as coordenadas x e y de dois pontos e calcular a distância entre os dois
pontos no plano. (Utilize a função sqrt (numero), biblioteca math.h). */

#include <stdio.h>
#include <math.h>

int main(){

    int x1, y1, x2, y2;

    puts("Digite as coordenadas x,y de dois pontos para descobrir a distancia entre eles: \n");
    
    puts("Primeira coordenada: ");
    scanf("%i", &x1);
    scanf("%i",&y1);

    puts("Segunda coordenada: ");
    scanf("%i", &x2);
    scanf("%i",&y2);

    printf("Distancia entre os dois pontos: %.2f", (float)sqrt(pow(x2-x1, 2)+ pow(y2-y1, 2)));
    
    return 0;
}
