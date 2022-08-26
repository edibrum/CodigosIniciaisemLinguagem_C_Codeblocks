#include <stdio.h>
#include <stdlib.h>
/*LISTA 2:
 EXERCÍCIO 5: Faça um algoritmo que leia uma variável e some 5 caso seja par ou some 8 caso seja ímpar, imprimir o resultado desta operação. */

int main()
{
    int numero;

    /*Pede para o usuário digitar o número: */
    printf("Digite o numero:\n");
    scanf("%d",&numero);

    /*Confere se é par ou ímpar:*/
    if (numero%2==0)
    printf("O numero e par e o resultado e: %d+5=%d. \n",numero,numero+5);

    else
    printf("O numero e impar e o resultado e: %d+8=%d. \n",numero,numero+8);

    return 0;
}
