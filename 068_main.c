#include <stdio.h>
#include <stdlib.h>

/*LISTA 3
11) Fa�a um algoritmo que leia 20 n�meros e, ao final, escreva quantos est�o entre 0 e 100. */

int main()
{
    /* Declara uma vari�vel acumuladora que vai contar quantos n�meros est�o entre 0 e 100, e a vari�vel n�mero que vai receber cada valor digitado: */
    int quantos_num=0,numero;


    /* Pede ao usu�rio que digite os 20 n�meros: */
    for (int i=1;i<=20;i++)
    {
        printf("Digite o numero %d: \n",i);
        scanf("%d",&numero);

        if (0<numero && numero<100)
        {
            quantos_num=quantos_num+1;
        }
    }

    /* Retorna o resultado para o usu�rio: */
        printf("Dentre os 20 numeros que voce digitou, ha um total de %d que estao entre 0 e 100.",quantos_num);


    return 0;
}
