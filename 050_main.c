#include <stdio.h>
#include <stdlib.h>
/*LISTA 2:
EXERCÍCIO 10: Elabore um algoritmo que leia dois números inteiros e mostre o resultado da diferença do maior valor pelo menor; */
int main()
{
    int a,b,dif;

    /*Pede ao usuário que digite os dados:*/
    printf("Digite o primeiro numero inteiro: \n");
    scanf("%d",&a);

    printf("Digite o segundo numero inteiro: \n");
    scanf("%d",&b);

    /*Calculo:*/
    if (a>=b)
    {
    dif=a-b;
    } else
    {
    dif=b-a;
    }

    /*Mostra o resultado:*/
    printf("A diferenca entre o numero maior e o menor e: %d. \n",dif);

    return 0;
}
