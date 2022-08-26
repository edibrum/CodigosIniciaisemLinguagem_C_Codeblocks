#include <stdio.h>
#include <stdlib.h>
/* EXERCÍCIO 11: Uma fábrica controla o tempo de trabalho sem acidentes pela quantidade de dias. Faça um algoritmo para
converter este tempo em anos, meses e dias. Assuma que cada mês possui sempre 30 dias. */

int main()
{
    int dias,meses,anos;

    /* Pede para a o usuário digitar a quantidade de dias: */
    printf("Digite quantos dias de trabalho sem acidentes: \n");
    scanf("%d",&dias);

    /* Cálculos:*/
    anos=dias/365;
    meses=(dias-(anos*365))/30;
    dias=dias-(anos*365)-(meses*30);


    /*Exibe o resultado para o usuário: */
    printf("\n Esses dias correspondem aproximadamente: %d ano(s), %d mes(es) e %d dia(s).\n",anos,meses,dias);

    return 0;
}
