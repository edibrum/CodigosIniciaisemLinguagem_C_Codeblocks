#include <stdio.h>
#include <stdlib.h>
/* EXERC�CIO 30: . Um funcion�rio recebe um sal�rio fixo mais 4% de comiss�o sobre as vendas. Fa�a um algoritmo que receba
o sal�rio fixo de um funcion�rio e o valor de suas vendas, calcule e mostre a comiss�o e o sal�rio final do
funcion�rio. */

int main()
{
    float fixo,vendas,comissao,salariof;

    /* Pede ao usu�rio que digite o sal�rio fixo, e o valor de suas vendas: */
    printf("Digite o salario fixo do funcionario: \n");
    scanf("%f",&fixo);

    printf("Agora, digite o valor das vendas do funcionario: \n");
    scanf("%f",&vendas);

    /*C�lculos:*/
    comissao=vendas*0.04;
    salariof=fixo+comissao;

    /*Exibe os resultados: */
    printf("A comissao do funcionario sera de R$ %.2f e seu salario final sera de R$ %.2f",comissao,salariof);

    return 0;
}
