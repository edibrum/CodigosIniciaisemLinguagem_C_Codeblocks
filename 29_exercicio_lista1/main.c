#include <stdio.h>
#include <stdlib.h>
/* EXERCÍCIO 29: Faça um algoritmo que receba o preço de um produto, calcule e mostre o novo preço, sabendo-se que este
sofreu um desconto de 10%. */

int main()
{
    float inicial,finnal;

    /*Pede ao usuário que digite o preço do produto:*/
    printf("Digite o preco inicial do produto: \n");
    scanf("%f",&inicial);

    /*Calcula o novo preço:*/
    finnal=inicial*0.9;

    /*Exibe o resultado para o usuário:*/
    printf("O novo preco (com desconto de 10%%) e de: R$ %.2f .\n",finnal);

    return 0;
}
