#include <stdio.h>
#include <stdlib.h>
/* EXERC�CIO 4: Escreva um algoritmo para ler o nome e a idade de uma pessoa, e exibir quantos dias de vida ela possui.
Considere sempre anos completos, e que um ano possui 365 dias. Ex: uma pessoa com 19 anos possui 6935 dias de vida;
veja um exemplo de sa�da: MARIA, VOC� J� VIVEU 6935 DIAS */

int main()
{
   char nome[20];
   int ano,r;

    /*Pede o nome do usu�rio: */
    printf("Digite o seu primeiro nome: \n");
    scanf("%s",nome);

    /*Pede a idade do usu�rio: */
    printf("Digite a sua idade: \n");
    scanf("%d",&ano);

    /*C�lculo: */
    r=ano*365;

    /*Exibe o resultado para o usu�rio: */
    printf("\n \n Voce, %s, ja viveu aroximadamente %d dias de vida. \n \n",nome,r);

    return 0;
}
