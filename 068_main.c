#include <stdio.h>
#include <stdlib.h>

/*LISTA 3
11) Faça um algoritmo que leia 20 números e, ao final, escreva quantos estão entre 0 e 100. */

int main()
{
    /* Declara uma variável acumuladora que vai contar quantos números estão entre 0 e 100, e a variável número que vai receber cada valor digitado: */
    int quantos_num=0,numero;


    /* Pede ao usuário que digite os 20 números: */
    for (int i=1;i<=20;i++)
    {
        printf("Digite o numero %d: \n",i);
        scanf("%d",&numero);

        if (0<numero && numero<100)
        {
            quantos_num=quantos_num+1;
        }
    }

    /* Retorna o resultado para o usuário: */
        printf("Dentre os 20 numeros que voce digitou, ha um total de %d que estao entre 0 e 100.",quantos_num);


    return 0;
}
