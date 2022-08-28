#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*LISTA 3
19) Desenvolver um algoritmo que leia a altura de 15 pessoas.
Este programa deverá calcular e mostrar :
a. A menor altura do grupo;
b. A maior altura do grupo;
OBS.: decidi mostrar também o nome das pessoas (mais alta e mais baixa)!!!
*/

int main()
{
    /* Para poder usar acentos e etc.:*/
    setlocale(LC_ALL, "Portuguese");

   /*Cria as variáveis: */
    float altura,maior,menor;
    maior=0;
    menor=1000;
    char nome[20],maior_pessoa[20],menor_pessoa[20];

    /*Pede que o usuário digite as os nomes e as alturas: */
    for (int i=1;i<=15;i++)
    {
    printf("\n Digite o nome da PESSOA %d:  ",i);
    scanf("%s",nome);
    printf("NOME REGISTRADO: %s",nome);

    printf("\n Digite a altura da PESSOA %d em metros:  ",i);
    scanf("%f",&altura);
    printf("ALTURA REGISTRADA: %.2f",altura);

        if (altura<=menor)
        {
            menor=altura;
            strcpy(menor_pessoa,nome);
        }

        if (altura>=maior)
        {
            maior=altura;
            strcpy(maior_pessoa,nome);
        }
    }

    /*Mostra quem é a pessoa mais alta e a pessoa mais baixa, bem como suas alturas, respectivamente: */
    printf("\n ************* \n A pessoa mais alta é @ %s e sua altura é de %.2f metros.\n",maior_pessoa,maior);
    printf("\n ************* \n A pessoa mais baixa é @ %s e sua altura é de %.2f metros.\n",menor_pessoa,menor);


    return 0;
}
