#include <stdio.h>
#include <stdlib.h>
/*LISTA 3
15)Desenvolva um algoritmo capaz de apresentar na tela o fatorial de um número inteiro informado pelo usuário. */

int main()
{
    /* Declara as variáveis: */
    int fatorial,numero,next;

    /* Pede ao usuário que digite um número: */
    printf("Digite um numero inteiro para calcular o fatorial dele: \n");
    scanf("%d",&numero);

    /* Calcula: */
    fatorial=1;
    next=1;
    do{
        fatorial=fatorial*next;
        next++;
    } while (next<=numero);

    /* Mostra o resultado para o usuário: */
    printf("O fatorial do numero %d e: %d. \n \n",numero,fatorial);

    return 0;
}
