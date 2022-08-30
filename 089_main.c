#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*LISTA 4
8)Ler um vetor R de 5 elementos contendo o gabarito da LOTO. A seguir ler um vetor A de 10 elementos contendo uma aposta.
A seguir imprima quantos pontos fez o apostador.
Obs.: Vou reaproveitar o código escrito no exercício anterior(7):
*/

int main()
{
    /* Para poder usar acentos e etc:*/
    setlocale(LC_ALL, "Portuguese");

    /* Declara as variáveis: */
    int numero,tam_R=5,tam_A=10;
    int vetor_R[tam_R];
    int vetor_A[tam_A];
    int tam_X=0;

    /* Lê os valores e aloca no VETOR R: */
    for (int i=0;i<tam_R;i++){
        printf("Digite o número %d do GABARITO DA LOTO: ",i+1);
        scanf("%d",&numero);
        vetor_R[i]=numero;
    }

    /*Mostra o vetor R:*/
    printf("\n GABARITO DA LOTO: \n");
    for (int i=0;i<tam_R;i++){
        printf("%d  ",vetor_R[i]);
    }
    printf("\n *************** \n");

    /* Lê os valores e aloca no VETOR A: */
    for (int j=0;j<tam_A;j++){
        printf("Digite o número %d da APOSTA REALIZADA: ",j+1);
        scanf("%d",&numero);
        vetor_A[j]=numero;
    }
    /*Mostra o vetor A:*/
    printf("\n APOSTA REALIZADA: \n");
    for (int j=0;j<tam_A;j++){
        printf("%d  ",vetor_A[j]);
    }
    printf("\n *************** \n");



    /* Verifica quantos pontos o apostador fez: */
    for (int i=0;i<tam_R;i++){
        for (int j=0;j<tam_A;j++){
            if(vetor_R[i]==vetor_A[j])
            tam_X++;
        }
    }

    /* Cria o vetor X: */
    int vetor_X[tam_X];
    int k=0;


    for (int i=0;i<tam_R;i++){
        for (int j=0;j<tam_A;j++){
            if(vetor_R[i]==vetor_A[j]){
                vetor_X[k]=vetor_R[i];
                k++;
            }
        }
    }

    /*Mostra o vetor X:*/
    if(tam_X>0){
    printf("\n O apostador acertou os seguintes números na aposta: \n");
    for (int k=0;k<tam_X;k++){
        printf("%d  ",vetor_X[k]);
    }
    printf("\n Fez um total de %d pontos! \n",tam_X);
    printf("\n \n ****** Programa Finalizado! ****** \n");
    }
    else
    printf("\n *** Ops! Não foi dessa vez! *** \n Não houve acertos! \n ****** Programa Finalizado! ****** \n");

    return 0;
}
