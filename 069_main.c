#include <stdio.h>
#include <stdlib.h>
/*LISTA 3
12) Fa�a um algoritmo que leia 20 n�meros e, ao final, escreva quantos:
>>> est�o entre 0 e 100
>>> quantos est�o entre 101 e 200 e
>>> quantos s�o maiores de 200
*/

int main()
{
    /* Declara uma tr�s vari�veis acumuladoras que v�o contar quantos n�meros est�o em cada intervalo, e a vari�vel n�mero que vai receber cada valor digitado: */
    int num_0a100=0,num_101a200=0,num_maior201=0,numero;


    /* Pede ao usu�rio que digite os 20 n�meros: */
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

    /* Retorna o resultado para o usu�rio: */
    printf("Dentre os 20 numeros que voce digitou: \n");
    printf("%d numero(s) esta/estao entre 0 e 100. \n",num_0a100);
    printf("%d numero(s) esta/estao entre 101 e 200. \n",num_101a200);
    printf("%d numero(s) e/sao maior(es) que 201. \n",num_maior201);


    return 0;
}
