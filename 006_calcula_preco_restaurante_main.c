#include <stdio.h>
#include <stdlib.h>
/* EXERCÍCIO 6:  O restaurante a quilo Bem-Bão cobra R$12,00 por cada quilo de refeição. Escreva um algoritmo que leia o
peso do prato montado pelo cliente (em quilos) e imprima o valor a pagar. Assuma que a balança já desconte
o peso do prato. */

int main()
{
    float peso,total;

    /*Pede o peso do prato para o usuário: */
    printf("Digite o peso do prato em Kg: \n");
    scanf("%f",&peso);

    /*Cálculo: */
    total=peso*12.00;

    /*Exibe o resultado para o usuário: */
    printf("\n \n Valor a pagar: %.2f. \n \n",total);

    return 0;
}
