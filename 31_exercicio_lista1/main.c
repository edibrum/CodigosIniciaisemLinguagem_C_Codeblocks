#include <stdio.h>
#include <stdlib.h>
/* EXERC�CIO 31: Fa�a um algoritmo que receba o peso de uma pessoa, calcule e mostre:
a. o novo peso se a pessoa engordar 15% sobre o peso digitado;
b. o novo peso se a pessoa emagrecer 20% sobre o peso digitado. */

int main()
{
    float peso,novo1,novo2;

    /*Pede para o usu�rio digitar o peso:*/
    printf("Digite o peso: \n");
    scanf("%f",&peso);

    /*C�lculo:*/
    novo1=peso*1.15;
    novo2=peso*0.8;

    /*Mostra os resultados para o usu�rio:*/
    printf("O novo peso se engordar 15%% sera de aproximadamente: %.2f Kg \n",novo1);
    printf("O novo peso se emagrecer 20%% sera de aproximadamente: %.2f Kg \n",novo2);

    return 0;
}
