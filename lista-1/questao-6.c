/* 6) Fazer um programa para ler a altura (em metros) e o sexo de uma pessoa e calcular o seu peso ideal
através da seguinte fórmula:
para homens: 72.7 * altura - 58
para mulheres: 62.1 * altura - 44.7
*/

#include <stdio.h>

int main(){

    float altura, peso;
    char sexo;

    printf("Digite o sexo [M/F]: \n");
    scanf("%c", &sexo);
    
    switch(sexo){
        case 'F':
            printf("Digite a altura em metros: \n");
            scanf("%f", &altura);
            peso = 62.1 * altura - 44.7;
            printf("O peso ideal e: %.2f \n", peso);
            break;
    
        case 'M':
            printf("Digite a altura em metros: \n");
            scanf("%f", &altura);
            peso = 72.7 * altura - 58;
            printf("O peso ideal e: %.2f \n", peso);
            break;

        default:
            printf("Dados invalidos! \n");
            break;
    }

    return 0;
}