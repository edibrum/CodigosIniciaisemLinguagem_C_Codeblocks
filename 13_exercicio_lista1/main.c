#include <stdio.h>
#include <stdlib.h>
/* EXERC�CIO 13: Ler um n�mero inteiro (assuma at� tr�s d�gitos) e imprimir a sa�da da seguinte forma: CENTENA = x
DEZENA = x
UNIDADE = x */

int main()
{
     int a,u,d,c;

    /* Pede para o usu�rio digitar o n�mero inteiro: */
    printf("Digite o numero inteiro de ate tres ordens: \n");
    scanf("%d",&a);

    /* C�lculos:*/
    c=a/100;
    d=(a-(c*100))/10;
    u=a-(c*100)-(d*10);

    /*Exibe o resultado para o usu�rio: */
    printf("\n Resultado: \n CENTENA=%d \n DEZENA=%d \n UNIDADE=%d \n",c,d,u);
    return 0;
}
