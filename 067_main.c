#include <stdio.h>
#include <stdlib.h>
/*LISTA 3
10) Escreva um algoritmo que leia 20 n�meros informados pelo usu�rio e exiba quantos n�meros s�o pares. */

int main()
{
    /* Declara uma a vari�vel acumuladora que vai contar quantos n�meros ser�o pares, e a vari�vel n�mero que vai receber cada valor digitado: */
    int quantos_num=0,numero;


    /* Pede ao usu�rio que digite os 20 n�meros: */
    for (int i=1;i<=20;i++)
    {
        printf("Digite o numero %d: \n",i);
        scanf("%d",&numero);

        if (numero%2==0)
        {
            quantos_num=quantos_num+1;
        }
    }

    /* Retorna o resultado para o usu�rio: */
        printf("Dentre os 20 numeros que voce digitou, ha um total de %d numeros pares.",quantos_num);
}