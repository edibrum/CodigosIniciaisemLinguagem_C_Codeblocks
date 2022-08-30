#include <stdio.h>
#include <stdlib.h>
/*LISTA 3
9)Escreva um algoritmo que leia 20 números informados pelo usuário e exiba quantos números são maiores do que 8. */

int main()
{
    /* Declara uma a variável acumuladora que vai contar quantos números serão maiores que 8, e a variável número que vai receber cada valor digitado: */
    int quantos_num=0,numero;


    /* Pede ao usuário que digite os 20 números: */
    for (int i=1;i<=20;i++)
    {
        printf("Digite o numero %d: \n",i);
        scanf("%d",&numero);

        if (numero>8)
        {
            quantos_num=quantos_num+1;
        }
    }

    /* Retorna o resultado para o usuário: */
        printf("Dentre os 20 numeros que voce digitou, ha um total de %d numeros maiores que 8.",quantos_num);


    return 0;
}
