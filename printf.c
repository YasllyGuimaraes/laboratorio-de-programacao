/* - Testando as especificações de formato e as sequências de escape.*/

# include <stdio.h>

int main(){

printf("Oi, tudo bem?\n");
printf("Valor inteiro: %d.\n", 10);
printf("Valor real: %f.\n", 3.141592);
printf("Valor real com apenas duas casas: %.2f.\n", 3.141592);
printf("Dado de texto: %c.\n", 'a');
printf("Dado de texto: %s.\n", "testando");
  
}