#include <stdio.h>
#include <stdlib.h>
/*LISTA 3
5) Escreva um algoritmo que leia 10 números informados pelo usuário e calcule a soma desses números. */

int main()
{
   /*Cria as variáveis: */
    float numero,somatorio=0.00;

    /*Pede que o usuário digite os valores para as variáveis de entrada e calcula: */
    for (int contador=1;contador<=10;contador++)
    {
    printf("\n Digite o numero %d:  ",contador);
    scanf("%f",&numero);
    somatorio=somatorio+numero;
    }

    /*Mostra o resultado: */
    printf("\n ************* \n SOMA: %.2f. \n",somatorio);

    return 0;
}
