#include <stdio.h>
#include <stdlib.h>
/* EXERC�CIO 33: Fa�a um algoritmo que calcule e mostre a �rea de um trap�zio. Sabe-se que: A = (base maior + base menor)* altura)/2 ; */

int main()
{
    float a,b,h,area;

    /*Pede ao usu�rio que digite as medidas do trapezio:*/
    printf("Digite o valor da base maior: \n");
    scanf("%f",&a);

    printf("Digite o valor da base menor: \n");
    scanf("%f",&b);

    printf("Digite o valor da altura: \n");
    scanf("%f",&h);

    /*C�lculo:*/
    area=((a+b)*h)/2;

    /*Exibe o resultado:*/
    printf("A area desse trapezio sera de aproximadamente %.2f, se ele existir. \n",area);

    return 0;
}
