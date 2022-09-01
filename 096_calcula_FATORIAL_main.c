#include <stdio.h>
#include <stdlib.h>

/* Escreva uma função que computa o fatorial de um número inteiro n passado por parâmetro.
OBS: Caso n ≤ 0 a função deve retornar 1. Use a função anterior e crie um programa que imprima os valores de
n! para n = 1, . . . , 20.   */

int calcula_fatorial(int numero, int fatorial);

int main()
{
    int numero=1,fatorial=1,fat;
    char opcao;

    printf(" VAMOS CALCULAR O FATORIAL DOS NUMEROS 1, 2, ..., 20: \n \n");

    do
    {
    printf(" DIGITE: \n 1 - PARA CONTINUAR \n 2 - PARA SAIR DO PROGRAMA \n ");
    scanf("%d",&opcao);

        if(opcao==2)
        {
            printf("Atencao: voce optou por SAIR!");
        }

        else if(opcao==1)
        {
            printf("\n ********************************************** \n FATORIAL DO NUMERO %d:",numero);
            fat=calcula_fatorial(numero,fatorial);
            printf(" = %d",fat);
            printf("\n ********************************************** \n ");
        }
    numero++;

        if(numero>20)
        break;

    } while(opcao!=2);

    printf("\n ********************************************** \n PROGRAMA FINALIZADO! \n ");
    return 0;
}

int calcula_fatorial(int numero, int fatorial)
{
    printf("\n %d! = ",numero);
    for(int max=numero; max>1; max--)
    {
        fatorial=fatorial*max;
        printf(" %d * ",max);
    }
    printf(" %d",1);
    return fatorial;
}
