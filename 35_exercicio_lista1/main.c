#include <stdio.h>
#include <stdlib.h>
/* EXERC�CIO 35: . Fa�a um algoritmo que calcule e mostre a �rea de um losango. Sabe-se que: A = (diagonal_maior * diagonal_menor)/2; */

int main()
{
    float d1,d2,area;

    /*Pede ao usu�rio que digite as medidas do trapezio:*/
    printf("Digite o valor da diagonal maior: \n");
    scanf("%f",&d1);

    printf("Digite o valor da diagonal menor: \n");
    scanf("%f",&d2);

    /*C�lculo:*/
    area=(d1*d2)/2;

    /*Exibe o resultado:*/
    printf("A area desse losango sera de aproximadamente %.2f, se ele existir. \n",area);
    return 0;
}
