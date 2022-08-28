#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*LISTA 3
23) Foi feita uma pesquisa de canal de TV em v�rias casas da cidade de Jo�o C�mara. Para cada
casa visitada, foi preenchida uma ficha contendo o n�mero do canal (3, 5, 8, 11 ou 13) e o n�mero
de pessoas que estavam assistindo o canal naquela casa. Fa�a um algoritmo que:
a) Leia a informa��o da quantidade de casas participantes da pesquisa.
b) Receba:
    as informa��es coletadas em cada uma das casas participantes da pesquisa;
    a informa��o do canal que estava sendo assistido
    e a quantidade de pessoas que estava assistindo aquele canal na casa.
c) Contabilize quantas pessoas estava assistindo cada canal (leve em conta a quantidade de pessoas que assistia cada canal em cada casa)
d) Ao finalizar a leitura de todas as fichas, escreva o n�mero do canal e sua respectiva porcentagem de audi�ncia. */

int main()
{
    /* Para poder usar acentos e etc.:*/
    setlocale(LC_ALL, "Portuguese");

    /*Cria as vari�veis: */
    int total_casas,canal,pessoas;
    int canal_3=0,canal_5=0,canal_8=0,canal_11=0,canal_13=0,total_telesp;

    printf("\n Digite o total de casas participantes da pesquisa: ");
    scanf("%d",&total_casas);

    for(int i=1;i<=total_casas;i++){
        printf("\n Sobre a CASA %d, responda: \n Digite o n�mero do canal de TV assistido: 3, 5, 8, 11 ou 13 : \n",i);
        scanf("%d",&canal);

        printf("\n Digite o n�mero de pessoas/telespectadores: \n");
        scanf("%d",&pessoas);

        if(canal==3)
        canal_3=canal_3+pessoas;

        else if(canal==5)
        canal_5=canal_5+pessoas;

        else if(canal==8)
        canal_8=canal_8+pessoas;

        else if(canal==11)
        canal_11=canal_11+pessoas;

        else if(canal==13)
        canal_13=canal_13+pessoas;

        else
        printf("\n Aten��o: canal INV�LIDO!");
        }

    total_telesp=canal_3+canal_5+canal_8+canal_11+canal_13;

    printf("\n ******************************************** \n Total de telespectadores: %d \n",total_telesp);
    printf("\n ******************************************** \n RESULTADO DA PESQUISA: AUDI�NCIA DOS CANAIS: \n");
    printf("\n Canal 3: %d %%",(canal_3*100)/total_telesp);
    printf("\n Canal 5: %d %%",(canal_5*100)/total_telesp);
    printf("\n Canal 8: %d %%",(canal_8*100)/total_telesp);
    printf("\n Canal 11: %d %%",(canal_11*100)/total_telesp);
    printf("\n Canal 13: %d %%",(canal_13*100)/total_telesp);





    return 0;
}
