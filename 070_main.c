#include <stdio.h>
#include <stdlib.h>
/*LISTA 3
13) Escreva um algoritmo que leia uma sequ�ncia de n�meros do usu�rio e realize a soma desses n�meros.
Encerre a execu��o quando um n�mero negativo for digitado. */

int main()
{
    /* Declara uma vari�vel acumuladora que vai guardar a soma, e a vari�vel n�mero que vai receber cada valor digitado: */
    float numero,soma=0.00;


    /* Pede ao usu�rio que digite os n�meros: */
    printf("Digite valores reais para fazer a SOMA. \n Para encerrar, digite um numero negativo. \n \n");

    for (int i=1;i;i++)
    {
        if (0<=numero)
        {
            printf("Digite o numero %d: \n",i);
            scanf("%f",&numero);
            soma=soma+numero;
        }
        else
        break;
    }

    /* Retorna o resultado para o usu�rio: */
    soma=soma-numero;
    printf("Voce digitou um numero negativo! \n Programa finalizado! \n");
    printf("Soma = R$ %.2f. \n",soma);

    return 0;
}
