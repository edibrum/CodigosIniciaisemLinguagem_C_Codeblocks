#include <stdio.h>
#include <stdlib.h>
/* EXERC�CIO 1: A imobili�ria Im�bilis vende apenas terrenos retangulares. Fa�a um algoritmo para ler as dimens�es de um
terreno e depois exibir a �rea do terreno. */

int main()
{
    float a,b,c;

    /*Pede as duas dimens�es para o usu�rio: */
    printf("Digite a largura do terreno em metros: \n");
    scanf("%f",&a);

    printf("Digite a altura do terreno em metros: \n");
    scanf("%f",&b);

    /*Calcula a �rea: */
    c=a*b;

    /*Exibe o resultado (�rea) para o usu�rio: */
    printf("A area deste terreno e de %.2f metros quadrados.",c);

    return 0;
}
