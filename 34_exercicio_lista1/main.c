#include <stdio.h>
#include <stdlib.h>
/* EXERC�CIO 34: Fa�a um algoritmo que calcule e mostre a �rea de um quadrado. Sabe-se que: A = lado * lado; */

int main()
{
    float l;

    /*Pede ao usu�rio que digite o lado:*/
    printf("Digite a medida do lado do quadrado: \n");
    scanf("%f",&l);

    /*Exibe o resultado:*/
    printf("A area do quadrado sera de aproximadamente: %.2f .\n",l*l);
    return 0;
}
