#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*LISTA 3
22)Um viajante decidiu se aventurar e percorrer toda a BR 101 de carro a partir do quilômetro 0 até
ultrapassar o quilômetro 4000, parando em várias cidades durante o percurso. Crie um algoritmo que,
em cada cidade que o viajante parar, leia a informação da quilometragem percorrida e adicione ao valor
da quilometragem total. Encerre o algoritmo quando o valor da quilometragem total percorrida for igual
ou ultrapassar os 4000 km. */

int main()
{
    /* Para poder usar acentos e etc.:*/
    setlocale(LC_ALL, "Portuguese");

    /*Cria as variáveis: */
    int cidades_paradas=0;
    float km_percorrida,km_total=0.00;
    char cidade[20];

    do{
        printf("\n \n Digite o nome da CIDADE: ");
        scanf("%s",cidade);
        printf("\n Digite a quilometragem percorrida: ");
        scanf("%f",&km_percorrida);
        cidades_paradas++;

        printf("\n CIDADE: %s | Quilometragem: %.2f ",cidade,km_percorrida);
        km_total=km_total+km_percorrida;
    }while(km_total<4000.00);

    printf("\n \n ########################################### \n Quiolometragem total (4.000 Km) ATINGIDA! \n Foram %d paradas, em um total de %.2f Km. \n",cidades_paradas,km_total);



    return 0;
}
