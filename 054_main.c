#include <stdio.h>
#include <stdlib.h>
/*LISTA 2:
EXERCÍCIO 14: . Num determinado Estado, para transferências de veículos, o DETRAN cobra:
* taxa de 1% para carros fabricados antes de 1990
* taxa de 1.5% para os fabricados de 1990 em diante,
Obs.: a taxa incide sobre o valor de tabela do carro.  Elabore um algoritmo que leia o ano e o valor de tabela do carro, calcule
e informe o imposto a ser pago. */

int main()
{
    float valor,imposto;
    int ano;

    /*Pede ao usuário que digite os dados:*/
    printf("Digite o valor tabelado do carro em reais:\n");
    scanf("%f",&valor);

    printf("Digite o ano de fabricacao do carro:\n");
    scanf("%d",&ano);

    /*Calcula e mostra o resultado:*/
    if (ano<1990)
        printf("Imposto a pagar: R$ %.2f \n", imposto=valor*0.01);
    else
        printf("Imposto a pagar: R$ %.2f \n", imposto=valor*0.015);

    return 0;
}
