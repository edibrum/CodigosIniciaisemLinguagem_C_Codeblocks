#include <stdio.h>
#include <stdlib.h>
/* EXERC�CIO 5:  Um motorista deseja colocar no seu tanque X reais de gasolina. Escreva um algoritmo para ler o pre�o do
litro da gasolina e o valor do pagamento, e exibir quantos litros ele conseguiu colocar no tanque. */

int main()
{
   float pagam,preco,litros;

    /*Pede o pre�o do litro da gasolina para o usu�rio: */
    printf("Digite o preco do litro de gasolina: \n");
    scanf("%f",&preco);

    /*Pede quantos reais o usu�rio pagou: */
    printf("Digite quantos reais voce pagou: \n");
    scanf("%f",&pagam);


    /*C�lculo: */
    litros=pagam/preco;

    /*Exibe o resultado para o usu�rio: */
    printf("\n \n Voce conseguiu colocar aproximadamente %.f litros de gasolina no seu tanque. \n \n",litros);

    return 0;
}
