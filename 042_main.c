#include <stdio.h>
#include <stdlib.h>
/*LISTA 2:
 EXERCÍCIO 2: Faça um algoritmo para receber um número qualquer e informar na tela se é par ou ímpar. */

int main()
{
    int numero;

    /*Pede para o usuário digitar o número: */
    printf("Digite o numero:\n");
    scanf("%d",&numero);

    /*Confere se é par ou ímpar:*/
    if (numero%2==0)
    printf("O numero %d e par. \n",numero);

    else
    printf("O numero %d e impar. \n",numero);

    return 0;
}
