#include <stdio.h>
#include <stdlib.h>
/* EXERC�CIO 6:  O restaurante a quilo Bem-B�o cobra R$12,00 por cada quilo de refei��o. Escreva um algoritmo que leia o
peso do prato montado pelo cliente (em quilos) e imprima o valor a pagar. Assuma que a balan�a j� desconte
o peso do prato. */

int main()
{
    float peso,total;

    /*Pede o peso do prato para o usu�rio: */
    printf("Digite o peso do prato em Kg: \n");
    scanf("%f",&peso);

    /*C�lculo: */
    total=peso*12.00;

    /*Exibe o resultado para o usu�rio: */
    printf("\n \n Valor a pagar: %.2f. \n \n",total);

    return 0;
}
