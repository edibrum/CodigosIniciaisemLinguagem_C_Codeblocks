#include <stdio.h>
#include <stdlib.h>
/* EXERC�CIO 12: Fa�a um algoritmo para ler o sal�rio de um funcion�rio e aument�-Io em 15%. Ap�s o aumento, desconte 8%
de impostos. Imprima o sal�rio inicial, o sal�rio com o aumento e o sal�rio final. */

int main()
{
    float a,b,aumento,desconto;

    /* Pede para o usu�rio digitar o sal�rio: */
    printf("Digite o salario: \n");
    scanf("%f",&a);

    /* C�lculos: */
    aumento=a*0.15;
    desconto=(a+aumento)*0.08;
    b=(a+aumento)-desconto;

    /*Exibe o resultado para o usu�rio: */
    printf("\n Salario inicial: R$ %.2f .\n Salario com aumento: R$ %.2f .\n Salario final: R$ %.2f .\n",a,a+aumento,b);
    return 0;
}
