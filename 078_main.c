#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*LISTA 3
21)O restaurante da quest�o 17 realiza reservas de mesas atrav�s de liga��es telef�nicas e possui 50
mesas dispon�veis para reserva. Dessas mesas, 25 s�o na �rea de fumantes e 25 na �rea de n�o
fumantes. Para cada liga��o recebida, o restaurante deve verificar se a reserva � para a mesa na
�rea de fumantes ou de n�o fumantes e contabilizar a quantidade de mesas restantes dispon�veis
em cada �rea. Construa um algoritmo que realize a reserva das mesas e encerre a execu��o
quando n�o houver mais mesas dispon�veis (nem na �rea de fumantes, nem na �rea de n�o fumantes).
*/

int main()
{
    /* Para poder usar acentos e etc.:*/
    setlocale(LC_ALL, "Portuguese");

    /*Cria as vari�veis: */
    int area_fum=25, area_naofum=25,opcao=0;

    /*Recebe a op��o do usu�rio e analisa a situa��o:*/
    for(int i=0;i<=50;i++){
        printf("\n Voc� est� fazendo reserva de uma mesa! \n Digite a op��o: \n 1 - �rea de fumantes \n 2 - �rea de N�O fumantes \n 3 - sair do programa");
        printf("\n **** OBS.: temos %d mesas dispon�veis na �rea de fumantes e %d na �rea de n�o fumantes. \n",area_fum,area_naofum);
        scanf("%d",&opcao);


        switch(opcao){
        case(1):
            if(area_fum==0)
            printf("\n Desculpe! N�o temos mais mesas dispon�veis nessa op��o! \n ******************************************************* \n");
            else
            area_fum--;
            break;

        case(2):
            if(area_naofum==0)
            printf("\n Desculpe! N�o temos mais mesas dispon�veis nessa op��o! \n ******************************************************* \n");
            else
            area_naofum--;
            break;

        case(3):
            printf("\n ################# \n Programa finalizado! \n");
            break;

        default:
            printf("\n ################# \n VALOR INV�LIDO! \n Reinicie o Programa! \n");
        }

        if((opcao==3) || (opcao!=1 && opcao!=2))
        break;

        if (area_naofum==0 && area_fum==0){
        printf("\n ################# \n TODA AS MESAS J� EST�O RESERVADAS! \n Programa finalizado! \n");
        break;
        }
    }

    return 0;
}
