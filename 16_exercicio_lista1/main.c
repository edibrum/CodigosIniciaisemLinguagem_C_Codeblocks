#include <stdio.h>
#include <stdlib.h>
/* EXERC�CIO 16: A lanchonete Gostosura vende apenas um tipo de sandu�che, cujo recheio inclui duas fatias de queijo, uma
fatia de presunto e uma rodela de hamb�rguer. Sabendo que cada fatia de queijo ou presunto pesa 50 gramas, e que a rodela de hamb�rguer pesa 100 gramas,
fa�a um algoritmo em que o dono forne�a a quantidade de sandu�ches a fazer, e a m�quina informe as quantidades (em quilos) de queijo, presunto e carne
necess�rios para compra. */

int main()
{
    int s;
    float queijo,presunto,carne;

    /* Pede para o usu�rio digitar a quantidade de sandu�ches a fazer: */
    printf("Digite a quantidade de sanduiches a fazer: \n");
    scanf("%d",&s);

    /* C�lculo:*/
    queijo=s*0.1;
    presunto=s*0.05;
    carne=s*0.1;


    /*Exibe os resultados para o usu�rio: */
    printf("\n Sera necessario comprar:\n %.2f Kg de queijo, %.2f Kg de presunto, e %.2f Kg de carne.",queijo,presunto,carne);
    return 0;
}
