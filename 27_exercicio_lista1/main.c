#include <stdio.h>
#include <stdlib.h>
/* EXERC�CIO 27: Fa�a um algoritmo que receba dois n�meros, calcule e mostre a divis�o do primeiro n�mero pelo segundo.
Sabe-se que o segundo n�mero n�o pode ser zero, portanto n�o � necess�rio se preocupar com valida��es. */

int main()
{
    float a,b;

    /* Pede para o usu�rio digitar os valores: */
    printf("Digite o primeiro numero: \n");
    scanf("%f",&a);

    printf("Digite o segundo numero: \n");
    scanf("%f",&b);

    /* Mostra o resultado para o usu�rio: */
    printf("Resultado: \n %.2f / %.2f = %.2f \n",a,b,(a/b));

    return 0;
}
