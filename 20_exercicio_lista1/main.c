#include <stdio.h>
#include <stdlib.h>
/* EXERC�CIO 20 (tinha erro no enunciado): Uma confec��o produz X blusas de l� e para isto gasta Y de novelos por blusa. Fa�a um algoritmo
para calcular quantos novelos de l� no total, ela gastar� para produzir a quantidade X de blusas. */

int main()
{
    int x,y,total;

    /* Pede ao usu�rio para digitar a quantidade X de blusas: */
    printf("Digite a quantidade de blusas:\n");
    scanf("%d",&x);

    /* Pede ao usu�rio para digitar a quantidade Y de novelos: */
    printf("Digite a quantidade de novelos necessarios por blusa:\n");
    scanf("%d",&y);

    /* C�lculo: */
    total=x*y;

     /* Mostra o resultado ao usu�rio: */
    printf("Serao necessarios %d novelos para produzir todas as blusas. \n",total);


    return 0;
}
