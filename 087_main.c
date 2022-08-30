#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*LISTA 4
6) Ler um vetor A com 10 elementos inteiros correspondentes as idades de um grupo de pessoas.
Escreva um programa que determine e escreva a menor e a maior idades e suas respectivas posições.
*/

int main() {
    setlocale(LC_ALL, "Portuguese");

    /* Declara as variáveis: */
    int TAM=10, idade,maior,menor,posicao_menor,posicao_maior;
    int vetor[TAM];

    /* Recebe os valores e aloca eles dentro do vetor: */
    printf("Digite a idade da pessoa 1:");
    scanf("%d",&idade);
    vetor[0]=idade;
    maior=idade;
    menor=idade;

    for(int i=1;i<TAM;i++){
    printf("Digite a idade da pessoa %d:",i+1);
    scanf("%d",&idade);
    vetor[i]=idade;
    /* Verifica quais idades são MAIOR e MENOR: */
        if (idade>maior){
        maior=idade;
        posicao_maior=i;}

        else if (idade<menor){
        menor=idade;
        posicao_menor=i;}
    }

    /* Mostra o vetor com seus valores: */
    printf("\n Com os valores digitados, teremos o vetor: \n");
    for(int i=0;i<TAM;i++){
    printf("  %d   ", vetor[i]);}

    /*Mostra os números MAIOR e MENOR:*/
    printf("\n \n Maior idade: %d \n - na posição: %d \n",maior,posicao_maior);
    printf("\n Menor idade: %d \n - na posição %d \n",menor,posicao_menor);

    return 0;
}
