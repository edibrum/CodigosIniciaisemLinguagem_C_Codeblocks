#include <stdio.h>
#include <stdlib.h>
/* EXERC�CIO 2: Fa�a um algoritmo para calcular quantas ferraduras s�o necess�rias para equipar todos os cavalos comprados para um haras. */

int main()
{
    int a,b;

    /*Pede a quantidade de cavalos comprados: */
    printf("Digite quantos cavalos foram comprados: \n");
    scanf("%d",&a);

    /*C�lculo: */
    b=a*4;

    /*Exibe o resultado (quantidade de ferraduras) para o usu�rio: */
    printf("Sao necessarias %d ferraduras para equipar os %d cavalos comprados.",b,a);

    return 0;
}
