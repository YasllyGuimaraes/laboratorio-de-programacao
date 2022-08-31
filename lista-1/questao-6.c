/* 6) Fazer um programa para ler a altura (em metros) e o sexo de uma pessoa e calcular o seu peso ideal
através da seguinte fórmula:
para homens: 72.7 * altura - 58
para mulheres: 62.1 * altura - 44.7
*/

#include <stdio.h>

int main(){

    float altura, peso;
    char sexo;

    printf("Digite a altura em metros: \n");
    scanf("%f", &altura);

    printf("Digite o sexo [M/F]: \n");
    scanf("%c", &sexo);
    
    if (sexo == 'F'){
        peso = 62.1 * altura - 44.7;
        printf("O peso ideal e: %f", peso);
    }

    if (sexo == 'M'){
        peso = 72.7 * altura - 58;
        printf("O peso ideal e: %f", peso);
    }

    else{
        printf("Dados invalidos! \n");
    }
    return 0;
}