#include <stdio.h>
#include <stdlib.h>
/*LISTA 2:
EXERCÍCIO 15: Uma empresa concederá um aumento de salário aos seus funcionários, variável de acordo com o cargo, conforme a tabela abaixo.
Faça um algoritmo que leia o salário e o cargo de um funcionário e calcule o novo salário. Se o cargo do funcionário não estiver na tabela,
ele deverá, então, receber 40% de aumento. Mostre o salário antigo, o novo salário e a diferença. */

int main()
{
    float s,sn;
    int codigo;

    /*Pede para o usuário digitar os dados:*/
    printf("Digite o salario do funcionario: \n");
    scanf("%f",&s);

    printf("Digite o codigo do cargo de acordo com as opcoes: \n 101 - Gerente \n 102 - Engenheiro \n 103 - Tecnico \n 000 - Outro cargo \n \n");
    scanf("%d",&codigo);

    /*Calcula:*/
    if (codigo==101)
        {
        sn=s*1.10;
        printf("Salario anterior: R$ %.2f \n Novo salario: R$ %.2f \n Diferenca: R$ %.2f \n",s,sn,(sn-s));
        }
    else if (codigo==102)
        {
        sn=s*1.20;
        printf("Salario anterior: R$ %.2f \n Novo salario: R$ %.2f \n Diferenca: R$ %.2f \n",s,sn,(sn-s));
        }
    else if (codigo==103)
        {
        sn=s*1.30;
        printf("Salario anterior: R$ %.2f \n Novo salario: R$ %.2f \n Diferenca: R$ %.2f \n",s,sn,(sn-s));
        }
    else if (codigo==000)
        {
        sn=s*1.40;
        printf("Salario anterior: R$ %.2f \n Novo salario: R$ %.2f \n Diferenca: R$ %.2f \n",s,sn,(sn-s));
        }
    else
        {
        printf("Codigo de Funcionario invalido!");
        }


    return 0;
}
