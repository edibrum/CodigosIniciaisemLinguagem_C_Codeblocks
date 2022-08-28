#include <stdio.h>
#include <stdlib.h>
/*LISTA 3
13) Escreva um algoritmo que leia uma sequência de números do usuário e realize a soma desses números.
Encerre a execução quando um número negativo for digitado. */

int main()
{
    /* Declara uma variável acumuladora que vai guardar a soma, e a variável número que vai receber cada valor digitado: */
    float numero,soma=0.00;


    /* Pede ao usuário que digite os números: */
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

    /* Retorna o resultado para o usuário: */
    soma=soma-numero;
    printf("Voce digitou um numero negativo! \n Programa finalizado! \n");
    printf("Soma = R$ %.2f. \n",soma);

    return 0;
}
