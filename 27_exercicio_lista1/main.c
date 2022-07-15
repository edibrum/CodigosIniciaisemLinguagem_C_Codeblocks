#include <stdio.h>
#include <stdlib.h>
/* EXERCÍCIO 27: Faça um algoritmo que receba dois números, calcule e mostre a divisão do primeiro número pelo segundo.
Sabe-se que o segundo número não pode ser zero, portanto não é necessário se preocupar com validações. */

int main()
{
    float a,b;

    /* Pede para o usuário digitar os valores: */
    printf("Digite o primeiro numero: \n");
    scanf("%f",&a);

    printf("Digite o segundo numero: \n");
    scanf("%f",&b);

    /* Mostra o resultado para o usuário: */
    printf("Resultado: \n %.2f / %.2f = %.2f \n",a,b,(a/b));

    return 0;
}
