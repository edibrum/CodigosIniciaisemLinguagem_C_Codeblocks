#include <stdio.h>
#include <stdlib.h>
/* EXERCÍCIO 16: A lanchonete Gostosura vende apenas um tipo de sanduíche, cujo recheio inclui duas fatias de queijo, uma
fatia de presunto e uma rodela de hambúrguer. Sabendo que cada fatia de queijo ou presunto pesa 50 gramas, e que a rodela de hambúrguer pesa 100 gramas,
faça um algoritmo em que o dono forneça a quantidade de sanduíches a fazer, e a máquina informe as quantidades (em quilos) de queijo, presunto e carne
necessários para compra. */

int main()
{
    int s;
    float queijo,presunto,carne;

    /* Pede para o usuário digitar a quantidade de sanduíches a fazer: */
    printf("Digite a quantidade de sanduiches a fazer: \n");
    scanf("%d",&s);

    /* Cálculo:*/
    queijo=s*0.1;
    presunto=s*0.05;
    carne=s*0.1;


    /*Exibe os resultados para o usuário: */
    printf("\n Sera necessario comprar:\n %.2f Kg de queijo, %.2f Kg de presunto, e %.2f Kg de carne.",queijo,presunto,carne);
    return 0;
}
