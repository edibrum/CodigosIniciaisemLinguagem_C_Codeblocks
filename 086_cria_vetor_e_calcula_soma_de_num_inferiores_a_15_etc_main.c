#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*LISTA 4
5) Criar um vetor A com 10 elementos inteiros. Escrever um programa que calcule e escreva:
a) a soma de elementos armazenados neste vetor que são inferiores a 15;
b) a quantidade de elementos armazenados no vetor que são iguais a 15; e
c) a média dos elementos armazenados no vetor que são superiores a 15.
*/

int main() {
    setlocale(LC_ALL, "Portuguese");

    /* Declara as variáveis: */
    int TAM=10,numero,menor_15=0,igual_15=0,maior_15=0,soma=0;
    float media;
    int vetor[TAM];

    for(int i=0;i<TAM;i++){
        printf("Digite o número %d do vetor:",i+1);
        scanf("%d",&numero);
        vetor[i]=numero;

        if(numero==15)
        igual_15++;

        else if(numero<15){
        soma=soma+numero;
        menor_15++;
        }

        else {
        media=media+numero;
        maior_15++;
        }
    }

    if(maior_15==0)
    maior_15=1;

    /*Mostra o vetor: */
    printf("\n VETOR: \n");
    for(int i=0;i<TAM;i++){
        printf("    %d",vetor[i]);
    }

    /*Mostra os resultados: */
    printf("\n A soma dos números menores que 15 é: %d \n A média dos números maiores que 15 é: %.2f \n A quantidade de ocorrências do número 15 é: %d \n",soma,(media/maior_15),igual_15);


    return 0;
}
