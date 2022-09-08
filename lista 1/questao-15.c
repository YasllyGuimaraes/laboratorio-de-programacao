/* 15) Uma empresa contrata um vendedor a R$ 50,25 por dia. Crie um programa que solicite o número de
dias trabalhados pelo vendedor e imprima o valor líquido a ser pago ao mesmo, sabendo que se ele
trabalhou até 10 dias não tem direito à gratificação, se ele trabalhou acima de 10 dias e até 20 dias
tem direito à gratificação de 20%, se ele trabalhou acima de 20 dias tem direito à gratificação de 30%.
Sempre são descontados 10% de imposto de renda em cima do valor bruto. */

#include <stdio.h>

int main(){

    int dias;
    float valor, valor_total, imposto;

    puts("Dias trabalhados: ");
    scanf("%i", &dias);

    valor = dias * 50.25 ;

    if (dias <= 10) {

        valor_total = valor - (0.1 * valor);
    
    }
    
    else if ((dias > 10) && (dias <= 20)) {
    
        valor_total = (valor + (0.2 * valor)) - 0.1 * (valor + (0.2 * valor));
    
    }

    else {
    
        valor_total = (valor + (0.3 * valor)) - 0.1 * (valor + (0.3 * valor));
        
    };

    puts("Valor liquido a ser pago: ");
    printf("%.2f", valor_total);

    return 0;
}
