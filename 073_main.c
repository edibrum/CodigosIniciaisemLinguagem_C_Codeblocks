#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*LISTA 3
16) Escreva um algoritmo que simule o funcionamento de um caixa de supermercado.
a) Seu algoritmo deve receber do usu�rio a informa��o de quantos produtos o cliente comprou e, para cada produto,
dever� ler o seu pre�o. Ao final, dever� informar quanto o cliente deve pagar pelas compras. */

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int opcao,n_arroz=0,n_feijao=0,n_macarrao=0,n_cafe=0;
    float p_arroz,p_feijao,p_macarrao,p_cafe,total=0.00;

    do{
    printf("Ola! Digite a opcao de produto de acordo com o indice: \n 1 - Arroz 5Kg \n 2 - Feijao 1Kg \n 3 - Macarrao 500gr \n 4 - Cafe 500 gr \n 5 - Encerrar a compra! \n");
    scanf("%d",&opcao);

    switch(opcao){
    case(1):
    printf("\n Produto escolhido: ARROZ \n Digite a quantidade de pacotes:\n");
    scanf("%d",&n_arroz);
    printf("\n Digite o pre�o de cada pacote:\n");
    scanf("%f",&p_arroz);
    total=total+(n_arroz*p_arroz);
    break;

    case(2):
    printf("\n Produto escolhido: FEIJ�O \n Digite a quantidade de pacotes:\n");
    scanf("%d",&n_feijao);
    printf("\n Digite o pre�o de cada pacote:\n");
    scanf("%f",&p_feijao);
    total=total+(n_feijao*p_feijao);
    break;

    case(3):
    printf("\n Produto escolhido: MACARR�O \n Digite a quantidade de pacotes:\n");
    scanf("%d",&n_macarrao);
    printf("\n Digite o pre�o de cada pacote:\n");
    scanf("%f",&p_macarrao);
    total=total+(n_macarrao*p_macarrao);
    break;

    case(4):
    printf("\n Produto escolhido: CAF� \n Digite a quantidade de pacotes:\n");
    scanf("%d",&n_cafe);
    printf("\n Digite o pre�o de cada pacote:\n");
    scanf("%f",&p_cafe);
    total=total+(n_cafe*p_cafe);
    break;

    default:
    printf("********************************** \n Op��o Inv�lida! ATENC�O! \n \n ");
    }
    }
    while (opcao!=5);
    printf("******************************** /n Compra finalizada! \n ************************************** \n");
    printf("Total de itens comprados: \n %d Arroz 5Kg \n %d Feij�o 1Kg \n %d Macarr�o 500gr \n %d Caf� 500 gr \n *************** \n Total a pagar: R$ %.2f",n_arroz,n_feijao,n_macarrao,n_cafe,total);
    printf("\n Agradecemos a sua prefer�ncia! Volte smepre!");
    return 0;
}
