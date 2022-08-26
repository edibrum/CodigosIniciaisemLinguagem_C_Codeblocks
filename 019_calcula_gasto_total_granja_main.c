#include <stdio.h>
#include <stdlib.h>
/* EXERCÍCIO 19: A granja Frangotech possui um controle automatizado de cada frango da sua produção. No pé direito do
frango há um anel com um chip de identificação; no pé esquerdo são dois anéis para indicar o tipo de alimento que ele deve consumir.
Sabendo que o anel com chip custa R$4,00 e o anel de alimento custa R$3,50, faça um algoritmo para calcular o gasto total da granja para
 marcar todos os seus frangos. */

int main()
{
    int frangos,total;

    /* Pede para o usuário digitar a quantidade de frangos: */
    printf("Digite a quantidade de frangos: \n");
    scanf("%d",&frangos);

    /* Cálculos:*/
    /*Obs.: serão 4.00 + 7.00 = 11.00 para cada frango*/
    total=11.00*frangos;


    /*Exibe o resultado para o usuário: */
    printf("\n O gasto total para marcar todos os frangos sera de R$ %d \n",total);
    return 0;
}
