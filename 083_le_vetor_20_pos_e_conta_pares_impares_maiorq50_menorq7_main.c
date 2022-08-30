#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*LISTA 4
2) Crie um programa que leia um vetor de 20 posições e informe:
a) Quantos números pares existem no vetor
b) Quantos números ímpares existem no vetor
c) Quantos números maiores do que 50
d) Quantos números menores do que 7
*/

int main() {
    setlocale(LC_ALL, "Portuguese");

    /* Declara as variáveis: */
    int TAM=20,numero,pares=0,impares=0,maiores_50=0,menores_7=0;
    int vetor[TAM];

    for(int i=0;i<TAM;i++){
        printf("Digite o número %d do vetor:",i+1);
        scanf("%d",&numero);
        vetor[i]=numero;

        if(numero>50)
        maiores_50++;

        if(numero<7)
        menores_7++;

        if(numero%2==0)
        pares++;

        else
        impares++;
    }

    /*Mostra o vetor: */
    printf("\n VETOR: \n");
    for(int i=0;i<TAM;i++){
        printf("    %d",vetor[i]);
    }

    /*Mostra os resultados: */
    printf("\n Números pares: %d \n Números ímpares: %d \n Números menores que 7: %d \n Números maiores que 50: %d \n",pares,impares,menores_7,maiores_50);



    return 0;
}
