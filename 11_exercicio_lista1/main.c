#include <stdio.h>
#include <stdlib.h>
/* EXERC�CIO 11: Uma f�brica controla o tempo de trabalho sem acidentes pela quantidade de dias. Fa�a um algoritmo para
converter este tempo em anos, meses e dias. Assuma que cada m�s possui sempre 30 dias. */

int main()
{
    int dias,meses,anos;

    /* Pede para a o usu�rio digitar a quantidade de dias: */
    printf("Digite quantos dias de trabalho sem acidentes: \n");
    scanf("%d",&dias);

    /* C�lculos:*/
    anos=dias/365;
    meses=(dias-(anos*365))/30;
    dias=dias-(anos*365)-(meses*30);


    /*Exibe o resultado para o usu�rio: */
    printf("\n Esses dias correspondem aproximadamente: %d ano(s), %d mes(es) e %d dia(s).\n",anos,meses,dias);

    return 0;
}
