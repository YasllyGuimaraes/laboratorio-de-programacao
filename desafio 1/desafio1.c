#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define MX 8

int bin(int num){
 int r;

 for(int i = 7; i >= 0; i--) {

    r = num >> i;

    if(r & 1) {
        printf("1");
    } 

    else {
        printf("0");
    }
 }
 printf("\n");
}

int main () {
    unsigned char mask = 0x01;
    unsigned char armario = 0, pos = 0, x = 0;
    int menu;
    srand(time(NULL));

    do {
        printf("\n----------MENU----------\n");
        printf("1. Ocupar armario\n2. Liberar armario\n3. Sair\n");
        scanf("%d", &menu);

        switch(menu){
            case 1:
                if (armario == 255){
                    printf("Armarios ocupados\n");
                    break;
                }

                x = armario;
                while(armario == x){
                    pos = rand() % MX;
                    mask =0x01;
                    mask = mask << pos;
                    armario = armario | mask;
                }

                printf("Armario: ");
                bin((int)armario);
                
                if(armario == 255){
                    printf("Armarios ocupados\n");
                }
                break;

            case 2:
                x = armario;
                printf("Armario: ");
                bin((int)armario);
                printf("\nDigite o numero do armario de 0 a 7:\n");
                scanf("%hhu", &pos);
                
                mask = 0x01;
                mask = mask << pos;
                armario = armario & ~mask;

                if(armario == x){
                    printf("Armario desocupado: ");
                    bin((int)armario);
                    break;
                }
                
            case 3:
                printf("Programa encerrado.");
                break;  

            default:
                printf("Valor digitado invalido.");
                break;
            }

    } while (menu!=3);
    
    return 0;
}
