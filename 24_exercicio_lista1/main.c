#include <stdio.h>
#include <stdlib.h>
/* EXERC�CIO 24: Um tonel de refresco � feito com 8 partes de �gua mineral e 2 partes de suco de maracuj�. Fa�a um algoritmo para calcular
quantos litros de �gua e de suco s�o necess�rios para se fazer X litros de refresco (informados pelo usu�rio). */

int main()
{
    float q,a,b;

    /* Recebe o valor de litros informado pelo usu�rio: */
    printf("Digite a quantidade de litros de refresco que pretende fazer:\n");
    scanf("%f",&q);

    /*C�lculo: */
    a=q*0.8;
    b=q*0.2;

    /* Mostra o resultado para o usu�rio: */
    printf("Serao necessarios %.2f litros de agua e %.2f litros de suco de maracuja. \n",a,b);

    return 0;
}
