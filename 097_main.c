#include <stdio.h>
#include <stdlib.h>

/* Escreva uma função que computa o fatorial de um número inteiro n passado por parâmetro.
OBS: Caso n ≤ 0 a função deve retornar 1. Use a função anterior e crie um programa que imprima os valores de
n! para n = 1, . . . , 20.   */

int calcula_fatorial(int numero, int fatorial);

int main()
{
    int numero,fatorial=1,fat;

    printf(" VAMOS CALCULAR O FATORIAL DE UM NUMERO: \n \n");

    printf("Digite um numero para calcular o fatorial dele: ");
    scanf("%d",&numero);

    if(numero<=0){
        printf("Atencao: o numero digitado e NEGATIVO!");
        printf("\n ********************************************** \n PROGRAMA FINALIZADO! \n ");
    }

    else{
    fat=calcula_fatorial(numero,fatorial);
    printf(" = %d",fat);
    printf("\n ********************************************** \n PROGRAMA FINALIZADO! \n ");
    }
    return 0;
}

int calcula_fatorial(int numero, int fatorial){
    printf("\n %d! = ",numero);
    for(int max=numero;max>1;max--){
        fatorial=fatorial*max;
        printf(" %d * ",max);
    }
    printf(" %d",1);
    return fatorial;
}
