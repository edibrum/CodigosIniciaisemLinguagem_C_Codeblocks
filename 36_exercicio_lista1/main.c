#include <stdio.h>
#include <stdlib.h>
/* EXERC�CIO 36: . Fa�a um algoritmo que receba o valor do sal�rio m�nimo e o valor do sal�rio de um funcion�rio, calcule e
mostre a quantidade de sal�rios m�nimos que ganha esse funcion�rio. */

int main()
{
    float sm,ss;

    /*Pede para o usu�rio digitar o valor do salario minimo e do dele:*/
    printf("Digite o valor do salario minimo: \n");
    scanf("%f",&sm);

    printf("Digite o valor do seu salario: \n");
    scanf("%f",&ss);

    /*Exibe o resultado:*/
    printf("Voce recebe o equivalente a aproximadamente %.f salarios minimos. \n",ss/sm);

    return 0;
}
