#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*LISTA 4
3) Criar um vetor A com 8 elementos inteiros. Construir um vetor B de mesmo tipo e tamanho e com os elementos
do vetor A multiplicados por 2, ou seja: B[i] = A[i] * 2. */

int main() {
    setlocale(LC_ALL, "Portuguese");

    /* Declara as variáveis: */
    int TAM=8,numero;
    int vetor_A[TAM],vetor_B[TAM];

    /*Lê os números e aloca dentro do vetor:*/
    for(int i=0;i<TAM;i++){
        printf("\n Digite o número %d do vetor:",i+1);
        scanf("%d",&numero);
        vetor_A[i]=numero;
        vetor_B[i]=numero*2;
    }

    /*Mostra o vetor A:*/
    printf("\n VETOR A: \n");
    for(int i=0;i<TAM;i++){
        printf("  %d",vetor_A[i]);
    }

    /*Mostra o vetor B:*/
    printf("\n VETOR B: \n");
    for(int i=0;i<TAM;i++){
        printf("  %d",vetor_B[i]);
    }

    return 0;
}
