#include <stdio.h>
#include <stdlib.h>
/*LISTA 3
12) Faça um algoritmo que leia 20 números e, ao final, escreva quantos:
>>> estão entre 0 e 100
>>> quantos estão entre 101 e 200 e
>>> quantos são maiores de 200
*/

int main()
{
    /* Declara uma três variáveis acumuladoras que vão contar quantos números estão em cada intervalo, e a variável número que vai receber cada valor digitado: */
    int num_0a100=0,num_101a200=0,num_maior201=0,numero;


    /* Pede ao usuário que digite os 20 números: */
    for (int i=1;i<=5;i++)
    {
        printf("Digite o numero %d: \n",i);
        scanf("%d",&numero);

        if (0<numero && numero<=100)
        num_0a100=num_0a100+1;

        else if (101<numero && numero<=200)
        num_101a200=num_101a200+1;

        else if (201<numero)
        num_maior201=num_maior201+1;

    }

    /* Retorna o resultado para o usuário: */
    printf("Dentre os 20 numeros que voce digitou: \n");
    printf("%d numero(s) esta/estao entre 0 e 100. \n",num_0a100);
    printf("%d numero(s) esta/estao entre 101 e 200. \n",num_101a200);
    printf("%d numero(s) e/sao maior(es) que 201. \n",num_maior201);


    return 0;
}
