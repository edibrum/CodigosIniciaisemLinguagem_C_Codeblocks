#include <stdio.h>
#include <stdlib.h>
/* EXERC�CIO 18: A empresa Hipotheticus paga R$10,00 por hora normal trabalhada, e R$15,00 por hora extra. Fa�a um algoritmo para calcular
e imprimir o sal�rio bruto e o sal�rio l�quido de um determinado funcion�rio. Considere
que o sal�rio l�quido � igual ao sal�rio bruto descontando-se 10% de impostos. */

int main()
{
    float t,e,sb,sl;

    /* Pede para o usu�rio digitar as horas normais trabalhadas: */
    printf("Digite as horas normais trabalhadas: \n");
    scanf("%f",&t);

    /* Pede para o usu�rio digitar as horas extras trabalhadas: */
    printf("Digite as horas extras trabalhadas: \n");
    scanf("%f",&e);

    /* C�lculo:*/
    sb=t*10+e*15;
    sl=sb*0.9;

    /*Exibe o resultado para o usu�rio: */
    printf("\n Salario bruto: R$ %.2f \n Salario liquido: R$ %.2f \n",sb,sl);
    return 0;
}
