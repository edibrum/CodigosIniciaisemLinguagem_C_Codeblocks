#include <stdio.h>
#include <stdlib.h>
/* EXERC�CIO 19: A granja Frangotech possui um controle automatizado de cada frango da sua produ��o. No p� direito do
frango h� um anel com um chip de identifica��o; no p� esquerdo s�o dois an�is para indicar o tipo de alimento que ele deve consumir.
Sabendo que o anel com chip custa R$4,00 e o anel de alimento custa R$3,50, fa�a um algoritmo para calcular o gasto total da granja para
 marcar todos os seus frangos. */

int main()
{
    int frangos,total;

    /* Pede para o usu�rio digitar a quantidade de frangos: */
    printf("Digite a quantidade de frangos: \n");
    scanf("%d",&frangos);

    /* C�lculos:*/
    /*Obs.: ser�o 4.00 + 7.00 = 11.00 para cada frango*/
    total=11.00*frangos;


    /*Exibe o resultado para o usu�rio: */
    printf("\n O gasto total para marcar todos os frangos sera de R$ %d \n",total);
    return 0;
}
