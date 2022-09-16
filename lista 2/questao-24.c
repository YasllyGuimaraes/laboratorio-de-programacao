/* 24. Um triângulo retângulo pode ter lados que são valores inteiros. O conjunto de três valores inteiros para
os lados de um triângulo retângulo  ́e chamado de tripla de Pitágoras. Esses três lados precisam satisfazer
o relacionamento de que a soma do quadrado de dois catetos  ́e igual ao quadrado da hipotenusa. Ache
todas as triplas de Pitágoras não superiores a 500 para cateto1, cateto2 e hipotenusa. Este  ́e um exemplo
de computação por força bruta. Isso não  ́e esteticamente atraente para muitas pessoas. Mas existem
muitos motivos para essas técnicas serem importantes. Em primeiro lugar, com o poder da computação
aumentando em um ritmo tão fenomenal, soluções que levariam anos, ou mesmo séculos, para serem
produzidas com a tecnologia de alguns anos atrás, agora podem ser produzidas em horas, minutos ou
mesmo segundos. Os chips microprocessadores recentes podem processar um bilh ̃ao de instru ̧c ̃oes por
segundo! Em segundo lugar, como você descobrir ́a mais adiante no Curso de Ciência da Computação,
existem inúmeros problemas interessantes para os quais não existe uma técnica algorítmica conhecida
além da simples força bruta. */

#include <stdio.h>
#include <math.h>

int main()
{
    int c1 = 1, c2 = 1;
    float h;
    while(c1 <= 500){
        c2 = 1;
        while(c2 <= 500){
            h = pow(c2 * c2 + c1 * c1, 1.0/2.0);
            if(ceil(h) == h){
                printf("triangulo %d %d %.0f \n", c1, c2, h);
            }
        c2++;
        }
        c1++;
    }
    return 0;
}