#include <stdio.h>
#include <stdlib.h>
/* EXERC�CIO 32: Fa�a um algoritmo que receba o peso de uma pessoa em quilos, calcule e mostre esse peso em gramas. */

int main()
{
    float q,g;

    /*Pede ao usu�rio que digite o peso em quilos:*/
    printf("Digite seu peso em quilos: \n");
    scanf("%f",&q);

    /*C�lculo:*/
    g=q*1000;

    /*Exibe o resultado:*/
    printf("O seu peso e equivalente a %.2f gramas. \n",g);

    return 0;
}
