#include <stdio.h>
#include <stdlib.h>
/* EXERCÍCIO 3: A padaria Hotpão vende uma certa quantidade de pães franceses e uma quantidade de broas a cada dia.
Cada pãozinho custa R$ 0,12 e a broa custa R$ 1,50. Ao final do dia, o dono quer saber quanto arrecadou com a venda dos pães e broas (juntos),
e quanto deve guardar numa conta de poupança (10% do total arrecadado). Você foi contratado para fazer os cálculos para o dono.
Com base nestes fatos, faça um algoritmo para ler as quantidades de pães e de broas, e depois calcular os dados solicitados. */

int main()
{
    float a,b,p,r,arrec,guar;

    /*Pede a quantidade de pães vendidos: */
    printf("Digite quantos paes foram vendidos: \n");
    scanf("%f",&a);

     /*Pede a quantidade de broas vendidas: */
    printf("Digite quantas broas foram vendidas: \n");
    scanf("%f",&b);

    /*Cálculos: */
    p=a*0.12;
    r=b*1.5;
    arrec=p+r;
    guar=arrec*0.1;

        /*Exibe os resultados para o usuário: */
    printf("\n \n Foram arrecadados R$ %.2f com as vendas de paes e broas. \n \n Dos quais R$ %.2f devem ir para a poupanca. \n \n",arrec,guar);

    return 0;
}
