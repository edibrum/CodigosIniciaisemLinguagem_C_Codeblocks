#include <stdio.h>
#include <stdlib.h>
/* EXERCÍCIO 36: . Faça um algoritmo que receba o valor do salário mínimo e o valor do salário de um funcionário, calcule e
mostre a quantidade de salários mínimos que ganha esse funcionário. */

int main()
{
    float sm,ss;

    /*Pede para o usuário digitar o valor do salario minimo e do dele:*/
    printf("Digite o valor do salario minimo: \n");
    scanf("%f",&sm);

    printf("Digite o valor do seu salario: \n");
    scanf("%f",&ss);

    /*Exibe o resultado:*/
    printf("Voce recebe o equivalente a aproximadamente %.f salarios minimos. \n",ss/sm);

    return 0;
}
