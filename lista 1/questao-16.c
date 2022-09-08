/* 16) Desenvolva um programa que calcule o salário liquido de um professor. Para elaborar o programa,  ́e
necessário possuir alguns dados, tais como o valor da hora aula, número de horas trabalhadas no mês e
percentual de desconto do INSS. Em primeiro lugar, deve-se estabelecer o seu salário bruto para fazer
o desconto e ter o valor do salário líquido. Obs.: o programa deve informar o salário bruto e salário
líquido do professor. */

#include <stdio.h>

int main(){

    int horas_trabalhadas;
    float valor_hora, desconto_inss, salario_bruto, salario_liquido;

    puts("Valor da hora aula: \n");
    scanf("%f", &valor_hora);

    puts("Numero de horas trabalhadas: \n");
    scanf("%i", &horas_trabalhadas);

    puts("Percentual de desconto do INSS: \n");
    scanf("%f", &desconto_inss);

    salario_bruto = horas_trabalhadas * valor_hora;

    salario_liquido = salario_bruto - ((desconto_inss / 100) * salario_bruto);

    printf("Salario bruto: R$%.2f\n", salario_bruto);
    printf("Salario liquido: R$%.2f\n", salario_liquido);

    return 0;
}
