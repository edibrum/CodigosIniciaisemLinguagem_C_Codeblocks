#include <stdio.h>
#include <stdlib.h>
/* EXERCÍCIO 2: Faça um algoritmo para calcular quantas ferraduras são necessárias para equipar todos os cavalos comprados para um haras. */

int main()
{
    int a,b;

    /*Pede a quantidade de cavalos comprados: */
    printf("Digite quantos cavalos foram comprados: \n");
    scanf("%d",&a);

    /*Cálculo: */
    b=a*4;

    /*Exibe o resultado (quantidade de ferraduras) para o usuário: */
    printf("Sao necessarias %d ferraduras para equipar os %d cavalos comprados.",b,a);

    return 0;
}
