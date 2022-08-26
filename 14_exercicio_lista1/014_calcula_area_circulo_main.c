#include <stdio.h>
#include <stdlib.h>
/* EXERCÍCIO 14: Calcule a área de uma pizza que possui um raio R (pi=3.14). */

int main()
{
    float r,a;

    /* Pede para o usuário digitar o raio da pizza: */
    printf("Digite o raio da pizza em centimetros: \n");
    scanf("%f",&r);

    /* Cálculo:*/
    a=3.14*r*r;

    /*Exibe o resultado para o usuário: */
    printf("\n A area da pizza e %.2f cm quadrados. \n",a);
    return 0;
}
