#include <stdio.h>
#include <stdlib.h>
/* EXERC�CIO 39: Jo�o recebeu seu sal�rio de X e precisa pagar duas contas (c1 e c2) que
est�o atrasadas. Como as contas est�o atrasadas, Jo�o ter� de pagar multa de 2% sobre cada conta. Fa�a
um algoritmo que calcule e mostre quanto restar� do sal�rio do Jo�o. */

int main()
{
    float salario,c1,c2,restante;

    /*Pede ao usu�rio que digite o sal�rio*/
    printf("Digite o salario em reais: \n");
    scanf("%f",&salario);

    /*Pede ao usu�rio que digite o valor das contas*/
    printf("Digite o valor da conta 1 em reais: \n");
    scanf("%f",&c1);

    printf("Digite o valor da conta 2 em reais: \n");
    scanf("%f",&c2);

    /*C�lculo:*/
    restante=salario-(c1*1.02+c2*1.02);

    /*Exibe o resultado para o usu�rio:*/
    printf("Apos pagar as duas contas, sobrara: R$ %.2f reais do seu salario.",restante);

    return 0;
}
