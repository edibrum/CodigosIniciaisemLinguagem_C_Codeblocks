#include <stdio.h>
#include <stdlib.h>
/* EXERCÍCIO 4: Escreva um algoritmo para ler o nome e a idade de uma pessoa, e exibir quantos dias de vida ela possui.
Considere sempre anos completos, e que um ano possui 365 dias. Ex: uma pessoa com 19 anos possui 6935 dias de vida;
veja um exemplo de saída: MARIA, VOCÊ JÁ VIVEU 6935 DIAS */

int main()
{
   char nome[20];
   int ano,r;

    /*Pede o nome do usuário: */
    printf("Digite o seu primeiro nome: \n");
    scanf("%s",nome);

    /*Pede a idade do usuário: */
    printf("Digite a sua idade: \n");
    scanf("%d",&ano);

    /*Cálculo: */
    r=ano*365;

    /*Exibe o resultado para o usuário: */
    printf("\n \n Voce, %s, ja viveu aroximadamente %d dias de vida. \n \n",nome,r);

    return 0;
}
