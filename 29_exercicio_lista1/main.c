#include <stdio.h>
#include <stdlib.h>
/* EXERC�CIO 29: Fa�a um algoritmo que receba o pre�o de um produto, calcule e mostre o novo pre�o, sabendo-se que este
sofreu um desconto de 10%. */

int main()
{
    float inicial,finnal;

    /*Pede ao usu�rio que digite o pre�o do produto:*/
    printf("Digite o preco inicial do produto: \n");
    scanf("%f",&inicial);

    /*Calcula o novo pre�o:*/
    finnal=inicial*0.9;

    /*Exibe o resultado para o usu�rio:*/
    printf("O novo preco (com desconto de 10%%) e de: R$ %.2f .\n",finnal);

    return 0;
}
