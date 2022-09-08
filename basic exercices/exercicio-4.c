// 4) Ler dois valores inteiros e realizar soma, subtração, multiplicação e divisão.
//Exercício feito durante a aula.

# include <stdio.h>

int main(){

    int a,b;
    float div;

    printf("Digite o primeiro numero inteiro: \n");
    scanf("%d", &a);

    printf("Digite o segundo numero inteiro: \n");
    scanf("%d", &b);

    div = (float)a / b;

    printf("Soma = %d\n", a + b);
    printf("Subtracao = %d\n", a - b);
    printf("Multiplicacao = %d\n", a * b);
    printf("Divisao = %.2f\n", div);

    return 0;
}