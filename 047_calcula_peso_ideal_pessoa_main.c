#include <stdio.h>
#include <stdlib.h>
/*LISTA 2:
 EXERCÍCIO 7: Tendo como dados de entrada a altura e o sexo de uma pessoa, construa um algoritmo que calcule seu peso
ideal, utilizando as seguintes fórmulas:
● para homens: (72.7 * h) – 58;
● para mulheres: (62.1 * h) – 44.7. */

int main()
{
    float altura,pesoideal;
    char sexo;

    /*Pede que o usuário digite sua altura e seu sexo:*/
    printf("Digite sua altura em metros:\n");
    scanf("%f",&altura);

    printf("Digite \n f para feminino \n m para masculino:\n");
    scanf(" %c",&sexo);

    /*Cálculos:*/
    if (sexo=='f')
    {
    pesoideal=(62.1*altura)-44.7;
    printf("Seu peso ideal e de aproximadamente: %.2f quilos. \n",pesoideal);
    }
    else if (sexo=='m')
    {
        pesoideal=(71.7*altura)-58;
        printf("Seu peso ideal e de aproximadamente: %.2f quilos. \n",pesoideal);
    }

    else
    printf("Desculpe! Nao e possivel cacular sem a opcao masculino ou feminino. \n");


    return 0;
}
