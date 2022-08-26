#include <stdio.h>
#include <stdlib.h>
/* EXERCÍCIO 24: Um tonel de refresco é feito com 8 partes de água mineral e 2 partes de suco de maracujá. Faça um algoritmo para calcular
quantos litros de água e de suco são necessários para se fazer X litros de refresco (informados pelo usuário). */

int main()
{
    float q,a,b;

    /* Recebe o valor de litros informado pelo usuário: */
    printf("Digite a quantidade de litros de refresco que pretende fazer:\n");
    scanf("%f",&q);

    /*Cálculo: */
    a=q*0.8;
    b=q*0.2;

    /* Mostra o resultado para o usuário: */
    printf("Serao necessarios %.2f litros de agua e %.2f litros de suco de maracuja. \n",a,b);

    return 0;
}
