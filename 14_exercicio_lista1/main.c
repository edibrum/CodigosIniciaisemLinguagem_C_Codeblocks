#include <stdio.h>
#include <stdlib.h>
/* EXERC�CIO 14: Calcule a �rea de uma pizza que possui um raio R (pi=3.14). */

int main()
{
    float r,a;

    /* Pede para o usu�rio digitar o raio da pizza: */
    printf("Digite o raio da pizza em centimetros: \n");
    scanf("%f",&r);

    /* C�lculo:*/
    a=3.14*r*r;

    /*Exibe o resultado para o usu�rio: */
    printf("\n A area da pizza e %.2f cm quadrados. \n",a);
    return 0;
}
