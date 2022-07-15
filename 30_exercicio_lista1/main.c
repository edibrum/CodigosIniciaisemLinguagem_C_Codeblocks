#include <stdio.h>
#include <stdlib.h>
/* EXERCÍCIO 30: . Um funcionário recebe um salário fixo mais 4% de comissão sobre as vendas. Faça um algoritmo que receba
o salário fixo de um funcionário e o valor de suas vendas, calcule e mostre a comissão e o salário final do
funcionário. */

int main()
{
    float fixo,vendas,comissao,salariof;

    /* Pede ao usuário que digite o salário fixo, e o valor de suas vendas: */
    printf("Digite o salario fixo do funcionario: \n");
    scanf("%f",&fixo);

    printf("Agora, digite o valor das vendas do funcionario: \n");
    scanf("%f",&vendas);

    /*Cálculos:*/
    comissao=vendas*0.04;
    salariof=fixo+comissao;

    /*Exibe os resultados: */
    printf("A comissao do funcionario sera de R$ %.2f e seu salario final sera de R$ %.2f",comissao,salariof);

    return 0;
}
