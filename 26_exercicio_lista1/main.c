#include <stdio.h>
#include <stdlib.h>
/* EXERC�CIO 26: Fa�a um algoritmo que receba tr�s n�meros, calcule e mostre a multiplica��o desses n�meros. */

int main()
{
    float a,b,c;

    /* Pede para o usu�rio digitar os tr�s n�meros: */
    printf("Digite o primeiro numero: \n");
    scanf("%f",&a);

    printf("Digite o segundo numero: \n");
    scanf("%f",&b);

    printf("Digite o terceiro numero: \n");
    scanf("%f",&c);

     /* Exibe o resultado para o usu�rio: */
    printf("Resultado: \n %.2f * %.2f *%.2f = %.2f. \n",a,b,c,a*b*c);

    return 0;
}
