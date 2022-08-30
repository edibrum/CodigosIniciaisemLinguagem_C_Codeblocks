#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*LISTA 3
21) O restaurante da questão 17 realiza reservas de mesas através de ligações telefônicas e possui 50
mesas disponíveis para reserva. Dessas mesas, 25 são na área de fumantes e 25 na área de não
fumantes. Para cada ligação recebida, o restaurante deve verificar se a reserva é para a mesa na
área de fumantes ou de não fumantes e contabilizar a quantidade de mesas restantes disponíveis
em cada área. Construa um algoritmo que realize a reserva das mesas e encerre a execução
quando não houver mais mesas disponíveis (nem na área de fumantes, nem na área de não fumantes).
*/

int main()
{
    /* Para poder usar acentos e etc.:*/
    setlocale(LC_ALL, "Portuguese");

    /*Cria as variáveis: */
    int area_fum=25, area_naofum=25,opcao=0;

    /*Recebe a opção do usuário e analisa a situação:*/
    for(int i=0;i<=50;i++){
        printf("\n Você está fazendo reserva de uma mesa! \n Digite a opção: \n 1 - área de fumantes \n 2 - área de NÃO fumantes \n 3 - sair do programa");
        printf("\n **** OBS.: temos %d mesas disponíveis na área de fumantes e %d na área de não fumantes. \n",area_fum,area_naofum);
        scanf("%d",&opcao);


        switch(opcao){
        case(1):
            if(area_fum==0)
            printf("\n Desculpe! Não temos mais mesas disponíveis nessa opção! \n ******************************************************* \n");
            else
            area_fum--;
            break;

        case(2):
            if(area_naofum==0)
            printf("\n Desculpe! Não temos mais mesas disponíveis nessa opção! \n ******************************************************* \n");
            else
            area_naofum--;
            break;

        case(3):
            printf("\n ################# \n Programa finalizado! \n");
            break;

        default:
            printf("\n ################# \n VALOR INVÁLIDO! \n Reinicie o Programa! \n");
        }

        if((opcao==3) || (opcao!=1 && opcao!=2))
        break;

        if (area_naofum==0 && area_fum==0){
        printf("\n ################# \n TODA AS MESAS JÁ ESTÃO RESERVADAS! \n Programa finalizado! \n");
        break;
        }
    }

    return 0;
}
