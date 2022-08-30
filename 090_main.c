#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*LISTA 4
9) Ler um vetor D de 10 elementos. Retire todos os valores nulos ou negativos do vetor D. Escrever o vetor ap�s a retirada dos nulos e negativos. */

int main()
{
    /* Para poder usar acentos e etc:*/
    setlocale(LC_ALL, "Portuguese");

    /* Declara as vari�veis: */
    int TAM=3;
    int TAM_novo,numero,contador=0;
    int vetor[TAM];

    /* Cria o vetor D: */
    for(int i=0;i<TAM;i++){
        printf("\n Digite a posi��o %d do vetor D: ",i);
        scanf("%d",&numero);
        vetor[i]=numero;

                /* Verifica quantos valores nulos h� no vetor: */
                if(numero!=0){
                    contador++;
                }
        }

    /* Se o vetor s� tiver valores nulos: */
    if(contador==0){
        printf("\n Todos os valores do vetor s�o nulos! \n");
    }


    /* Se o vetor tiver ao menos um valor n�o-nulo: */
    else{
    /* Mostra o vetor D: */
    printf("\n Vetor inicial D: \n [ ");
    for(int i=0;i<TAM;i++){
        printf(" %d ",vetor[i]);
        }
    printf("] \n");

    /* Cria e escreve o vetor_naonulo: */
    int vetor_naonulo[contador],j=0;
    printf("\n \n O vetor novo com valores n�o-nulos (com %d posi��o/posi��es) �: \n [ ",contador);
        for(int i=0;i<TAM;i++){
            if(vetor[i]!=0){
                vetor_naonulo[j]=vetor[i];
                printf(" %d ",vetor_naonulo[j]);
                j++;
            }
        }
    printf("] \n");
    }

    printf("\n ################ Programa finalizado! ################ \n");

    return 0;
}
