#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*LISTA 4
1) Escreva um programa que leia dois vetores de 10 posições e faça a soma dos elementos de mesmo índice, colocando o resultado
em um terceiro vetor. Mostre o vetor resultante. */

int main() {
    setlocale(LC_ALL, "Portuguese");

    /* Declara as variáveis: */
    int numero1,numero2;
    int TAM=10;
    int vetor1[TAM],vetor2[TAM],vetor_soma[TAM];


    /* Recebe os valores e aloca eles dentro do vetor: */
    for(int contador=0;contador<TAM;contador++){
    printf("Digite o número %d do primeiro vetor:",contador+1);
    scanf("%d",&numero1);
    vetor1[contador]=numero1;

    printf("Digite o número %d do segundo vetor:",contador+1);
    scanf("%d",&numero2);
    vetor2[contador]=numero2;

    vetor_soma[contador]=numero1+numero2;
    }

    /*Mostra o primeiro vetor: */
    printf("\n PRIMEIRO VETOR: \n");
    for(int i=0;i<TAM;i++){
        printf("    %d",vetor1[i]);
    }

    /*Mostra o segundo vetor: */
    printf("\n SEGUNDO VETOR: \n");
    for(int i=0;i<TAM;i++){
        printf("    %d",vetor2[i]);
    }

    /*Mostra o terceiro vetor: */
    printf("\n \n VETOR SOMA - RESULTANTE: \n \n");
    for(int i=0;i<TAM;i++){
        printf("    %d",vetor_soma[i]);
    }

    return 0;
}
