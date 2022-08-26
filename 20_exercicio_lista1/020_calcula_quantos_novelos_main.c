#include <stdio.h>
#include <stdlib.h>
/* EXERCÍCIO 20 (tinha erro no enunciado): Uma confecção produz X blusas de lã e para isto gasta Y de novelos por blusa. Faça um algoritmo
para calcular quantos novelos de lã no total, ela gastará para produzir a quantidade X de blusas. */

int main()
{
    int x,y,total;

    /* Pede ao usuário para digitar a quantidade X de blusas: */
    printf("Digite a quantidade de blusas:\n");
    scanf("%d",&x);

    /* Pede ao usuário para digitar a quantidade Y de novelos: */
    printf("Digite a quantidade de novelos necessarios por blusa:\n");
    scanf("%d",&y);

    /* Cálculo: */
    total=x*y;

     /* Mostra o resultado ao usuário: */
    printf("Serao necessarios %d novelos para produzir todas as blusas. \n",total);


    return 0;
}
