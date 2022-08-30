#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*LISTA 4
7) Ler 2 vetores, R de 5 elementos e S de 10 elementos. Gere um vetor X que possua os elementos comuns a
R e a S. Considere que no mesmo vetor não haverá números repetidos. Escrever o vetor X. */

int main()
{
    /* Para poder usar acentos e etc:*/
    setlocale(LC_ALL, "Portuguese");

    /* Declara as variáveis: */
    int numero,tam_R=5,tam_S=10;
    int vetor_R[tam_R];
    int vetor_S[tam_S];
    int tam_X=0;

    /* Lê os valores e aloca no VETOR R: */
    for (int i=0;i<tam_R;i++){
        printf("Digite o valor da posição %d do vetor R: ",i+1);
        scanf("%d",&numero);
        vetor_R[i]=numero;
    }
    /*Mostra o vetor R:*/
    printf("\n VETOR R: \n");
    for (int i=0;i<tam_R;i++){
        printf("%d  ",vetor_R[i]);
    }
    printf("\n *************** \n");



    /* Lê os valores e aloca no VETOR S: */
    for (int j=0;j<tam_S;j++){
        printf("Digite o valor da posição %d do vetor S: ",j+1);
        scanf("%d",&numero);
        vetor_S[j]=numero;
    }
    /*Mostra o vetor S:*/
    printf("\n VETOR S: \n");
    for (int j=0;j<tam_S;j++){
        printf("%d  ",vetor_S[j]);
    }
    printf("\n *************** \n");



    /* Verifica os valores que serão iguais e determina o tamanho do vetor X: */
    for (int i=0;i<tam_R;i++){
        for (int j=0;j<tam_S;j++){
            if(vetor_R[i]==vetor_S[j])
            tam_X++;
        }
    }

    printf("\n O tamanho do vetor X será: %d",tam_X);
    printf("\n *************** \n");
    /* Cria o vetor X: */
    int vetor_X[tam_X];
    int k=0;


    for (int i=0;i<tam_R;i++){
        for (int j=0;j<tam_S;j++){
            if(vetor_R[i]==vetor_S[j]){
                vetor_X[k]=vetor_R[i];
                k++;
            }
        }
    }

    /*Mostra o vetor X:*/
    printf("\n E o VETOR X é: \n");
    for (int k=0;k<tam_X;k++){
        printf("%d  ",vetor_X[k]);
    }
    printf("\n \n ****** Programa Finalizado! ****** \n");

    return 0;
}
