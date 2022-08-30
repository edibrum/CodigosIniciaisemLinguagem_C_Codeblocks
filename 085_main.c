#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*LISTA 4
4) Criar dois vetores A e B cada um com 10 elementos inteiros. Construir um vetor C, onde cada elemento de C é a soma dos
respectivos elementos em A e B, ou seja: C[i] = A[i] + B[i]. */

int main() {
    setlocale(LC_ALL, "Portuguese");

   /* Declara as variáveis: */
    int numero1,numero2;
    int TAM=10;
    int vetorA[TAM],vetorB[TAM],vetorC[TAM];


    /* Recebe os valores e aloca eles dentro do vetor: */
    for(int contador=0;contador<TAM;contador++){
    printf("\n Digite o número %d do vetor A:",contador+1);
    scanf("%d",&numero1);
    vetorA[contador]=numero1;

    printf("Digite o número %d do vetor B:",contador+1);
    scanf("%d",&numero2);
    vetorB[contador]=numero2;

    vetorC[contador]=numero1+numero2;
    }

    /*Mostra o primeiro vetor: */
    printf("\n VETOR A: \n");
    for(int i=0;i<TAM;i++){
        printf("    %d",vetorA[i]);
    }

    /*Mostra o segundo vetor: */
    printf("\n VETOR B: \n");
    for(int i=0;i<TAM;i++){
        printf("    %d",vetorB[i]);
    }

    /*Mostra o terceiro vetor: */
    printf("\n \n VETOR C = A + B: \n \n");
    for(int i=0;i<TAM;i++){
        printf("    %d",vetorC[i]);
    }

    return 0;
}
