#include <stdio.h>
#include <stdlib.h>
/* EXERCÍCIO 18: A empresa Hipotheticus paga R$10,00 por hora normal trabalhada, e R$15,00 por hora extra. Faça um algoritmo para calcular
e imprimir o salário bruto e o salário líquido de um determinado funcionário. Considere
que o salário líquido é igual ao salário bruto descontando-se 10% de impostos. */

int main()
{
    float t,e,sb,sl;

    /* Pede para o usuário digitar as horas normais trabalhadas: */
    printf("Digite as horas normais trabalhadas: \n");
    scanf("%f",&t);

    /* Pede para o usuário digitar as horas extras trabalhadas: */
    printf("Digite as horas extras trabalhadas: \n");
    scanf("%f",&e);

    /* Cálculo:*/
    sb=t*10+e*15;
    sl=sb*0.9;

    /*Exibe o resultado para o usuário: */
    printf("\n Salario bruto: R$ %.2f \n Salario liquido: R$ %.2f \n",sb,sl);
    return 0;
}
