#include <stdio.h>
#include <stdlib.h>
/*LISTA 3
2) Escreva um algoritmo que calcule o somatório dos números de um intervalo informado pelo usuário. */
int main()
{
    /*Cria as variáveis: */
    int n1,n2,somatorio;

    /*Pede que o usuário digite os valores para as variáveis de entrada: */
    printf("Digite o numero inicial do intervalo: \n");
    scanf("%d",&n1);
    somatorio=0;

    printf("Digite o numero final do intervalo: \n");
    scanf("%d",&n2);

    /*Calcula o somatorio: */
    for (int numeros=n1;numeros<=n2;numeros++)
    {
        somatorio=somatorio+numeros;
        printf(" %d   ",numeros);
    }

    /*Mostra o resultado: */
    printf("\n O somatorio dos numeros no intervalo e: %d. \n",somatorio);

    return 0;
}
