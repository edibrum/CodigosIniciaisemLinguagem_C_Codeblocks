#include <stdio.h>
#include <stdlib.h>
/* EXERCÍCIO 26: Faça um algoritmo que receba três números, calcule e mostre a multiplicação desses números. */

int main()
{
    float a,b,c;

    /* Pede para o usuário digitar os três números: */
    printf("Digite o primeiro numero: \n");
    scanf("%f",&a);

    printf("Digite o segundo numero: \n");
    scanf("%f",&b);

    printf("Digite o terceiro numero: \n");
    scanf("%f",&c);

     /* Exibe o resultado para o usuário: */
    printf("Resultado: \n %.2f * %.2f *%.2f = %.2f. \n",a,b,c,a*b*c);

    return 0;
}
