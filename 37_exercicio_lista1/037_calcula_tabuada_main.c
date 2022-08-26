#include <stdio.h>
#include <stdlib.h>
/* EXERCÍCIO 37: Faça um algoritmo que calcule e mostre a tabuada de um número digitado pelo usuário. */

int main()
{
    float a;

    /*Pede para o usuário digitar o número:*/
    printf("Digite um numero: \n");
    scanf("%f",&a);

    printf("A tabuada do numero %.2f e: \n",a);
    printf("0 * %.2f= %.2f \n",a,0*a);
    printf("1 * %.2f= %.2f \n",a,1*a);
    printf("2 * %.2f= %.2f \n",a,2*a);
    printf("3 * %.2f= %.2f \n",a,3*a);
    printf("4 * %.2f= %.2f \n",a,4*a);
    printf("5 * %.2f= %.2f \n",a,5*a);
    printf("6 * %.2f= %.2f \n",a,6*a);
    printf("7 * %.2f= %.2f \n",a,7*a);
    printf("8 * %.2f= %.2f \n",a,8*a);
    printf("9 * %.2f= %.2f \n",a,9*a);
    printf("10 * %.2f= %.2f \n",a,10*a);
    printf("11 * %.2f= %.2f \n",a,11*a);
    printf("...");

    return 0;
}
