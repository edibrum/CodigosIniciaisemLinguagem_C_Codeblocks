#include <stdio.h>
#include <stdlib.h>
/* EXERCÍCIO 39: João recebeu seu salário de X e precisa pagar duas contas (c1 e c2) que
estão atrasadas. Como as contas estão atrasadas, João terá de pagar multa de 2% sobre cada conta. Faça
um algoritmo que calcule e mostre quanto restará do salário do João. */

int main()
{
    float salario,c1,c2,restante;

    /*Pede ao usuário que digite o salário*/
    printf("Digite o salario em reais: \n");
    scanf("%f",&salario);

    /*Pede ao usuário que digite o valor das contas*/
    printf("Digite o valor da conta 1 em reais: \n");
    scanf("%f",&c1);

    printf("Digite o valor da conta 2 em reais: \n");
    scanf("%f",&c2);

    /*Cálculo:*/
    restante=salario-(c1*1.02+c2*1.02);

    /*Exibe o resultado para o usuário:*/
    printf("Apos pagar as duas contas, sobrara: R$ %.2f reais do seu salario.",restante);

    return 0;
}
