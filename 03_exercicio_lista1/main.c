#include <stdio.h>
#include <stdlib.h>
/* EXERC�CIO 3: A padaria Hotp�o vende uma certa quantidade de p�es franceses e uma quantidade de broas a cada dia.
Cada p�ozinho custa R$ 0,12 e a broa custa R$ 1,50. Ao final do dia, o dono quer saber quanto arrecadou com a venda dos p�es e broas (juntos),
e quanto deve guardar numa conta de poupan�a (10% do total arrecadado). Voc� foi contratado para fazer os c�lculos para o dono.
Com base nestes fatos, fa�a um algoritmo para ler as quantidades de p�es e de broas, e depois calcular os dados solicitados. */

int main()
{
    float a,b,p,r,arrec,guar;

    /*Pede a quantidade de p�es vendidos: */
    printf("Digite quantos paes foram vendidos: \n");
    scanf("%f",&a);

     /*Pede a quantidade de broas vendidas: */
    printf("Digite quantas broas foram vendidas: \n");
    scanf("%f",&b);

    /*C�lculos: */
    p=a*0.12;
    r=b*1.5;
    arrec=p+r;
    guar=arrec*0.1;

        /*Exibe os resultados para o usu�rio: */
    printf("\n \n Foram arrecadados R$ %.2f com as vendas de paes e broas. \n \n Dos quais R$ %.2f devem ir para a poupanca. \n \n",arrec,guar);

    return 0;
}
