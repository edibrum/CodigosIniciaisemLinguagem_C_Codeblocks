#include <stdio.h>
#include <stdlib.h>
/* EXERCÍCIO 34: Faça um algoritmo que calcule e mostre a área de um quadrado. Sabe-se que: A = lado * lado; */

int main()
{
    float l;

    /*Pede ao usuário que digite o lado:*/
    printf("Digite a medida do lado do quadrado: \n");
    scanf("%f",&l);

    /*Exibe o resultado:*/
    printf("A area do quadrado sera de aproximadamente: %.2f .\n",l*l);
    return 0;
}
