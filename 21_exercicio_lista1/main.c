#include <stdio.h>
#include <stdlib.h>
/* EXERC�CIO 21: A f�brica de refrigerantes Meia-Cola vende seu produto em tr�s formatos: lata de 350 ml, garrafa de 600 ml e
garrafa de 2 litros. Se um comerciante compra uma determinada quantidade de cada formato, fa�a um algoritmo para calcular
quantos litros de refrigerante ele comprou. */

int main()
{
    int latas,garrafa600,garrafa2l;
    float total;

    /* Pede ao usu�rio que digite a quantidade de cada formato: */
    printf("Digite a quantidade de latas de 350ml: \n");
    scanf("%d",&latas);

    printf("Digite a quantidade de garrafas de 600ml: \n");
    scanf("%d",&garrafa600);

    printf("Digite a quantidade de garrafas de 2 litros: \n");
    scanf("%d",&garrafa2l);

    /* C�lculo: */
    total=(latas*0.350)+(garrafa600*0.6)+(garrafa2l*2);

    /* Exibe o resultado ao usu�rio: */
    printf("O total de refrigerante comprado foi de %.3f litros: \n",total);


    return 0;
}
