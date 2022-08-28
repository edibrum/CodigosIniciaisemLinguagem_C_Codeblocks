#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*LISTA 3
20) Uma loja de animais vende gatos e cachorros. Escreva um algoritmo que leia a quantidade de
animais da loja e, para cada animal, leia a informa��o da esp�cie do animal (se � gato ou
cachorro). Ao final, exiba a quantidade de animais que s�o gatos e a quantidade de animais que
s�o cachorros existentes na loja. */

int main()
{
    /* Para poder usar acentos e etc.:*/
    setlocale(LC_ALL, "Portuguese");

    /*Cria as vari�veis: */
    int animais,tipo,dog=0,cat=0;

    /*Pede que o usu�rio digite os dados: */
    printf("\n Digite a quantidade de ANIMAIS: ");
    scanf("%d",&animais);

    for (int i=1;i<=animais;i++)
    {
        printf("\n Digite a esp�cie do animal %d: \n 1 - se GATO \n 2 - se CACHORRO \n",i);
        scanf("%d",&tipo);

        if (tipo==1)
        cat++;

        else if (tipo==2)
        dog++;

        /*No caso de o usu�rio digitar um valor inv�lido ter� de reiniciar o programa: */
        else{
        printf("\n #### Valor inv�lido! ####\n #### REINICIE O PROGRAMA #### ");
        break;
        }

        if(i==animais){
            /*Ao final - Mostra quantos animais s�o gatos e quantos s�o cachorros: */
            printf("\n ************* \n GATOS: %d",cat);
            printf("\n ************* \n CACHORROS: %d \n ************* \n",dog);
            }
    }

    return 0;
}
