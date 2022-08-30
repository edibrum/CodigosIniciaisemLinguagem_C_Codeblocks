#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*LISTA 4
10) Elabore um algoritmo que leia um vetor e em seguida apresente o vetor ordenado � use o m�todo de ordena��o que preferir. */

int main()
{
    /* Para poder usar acentos e etc:*/
    setlocale(LC_ALL, "Portuguese");

    /* Declara as vari�veis: */
    int TAM,aux;
    int vetor[TAM],min;

    /* O usu�rio escolhe o tamanho do vetor: */
    printf("Digite o tamanho do vetor: ");
    scanf("%d",&TAM);

    if(TAM<=0){
        printf("\n O vetor seria NULO ou n�o existiria! \n Reinicie o programa e digite um valor inteiro maior que zero! \n \n ");
    }

    else{
    /* Pede ao usu�rio os valores para as posi��es dentro do vetor: */
    for(int i=0;i<TAM;i++){
        printf("\n Digite o valor para a posi��o %d do vetor: ",i);
        scanf("%d",&vetor[i]);
    }

    /* Mostra o vetor inicial: */
    printf("\n Vetor inicial: \n [ ");
    for(int i=0;i<TAM;i++){
        printf(" %d ",vetor[i]);
    }
    printf(" ] \n");

    /*Inicia a reordena��o - ser�o dois "FOR" para fazer isso:*/
    for(int i=0;i<TAM;i++){
        min=i;

        for(int j=i+1;j<TAM;j++){
            if(vetor[min]>vetor[j]){
                min=j;
            }
        }
    aux=vetor[i];
    vetor[i]=vetor[min];
    vetor[min]=aux;
    }

        /* Mostra o vetor ordenado: */
        printf("\n Vetor reordenado em ordem crescente: \n [ ");
        for(int i=0;i<TAM;i++){
            printf(" %d ",vetor[i]);
        }
        printf(" ] \n");
    }

    return 0;
}
