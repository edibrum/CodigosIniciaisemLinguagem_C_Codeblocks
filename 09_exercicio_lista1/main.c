#include <stdio.h>
#include <stdlib.h>
/* EXERC�CIO 9: Uma f�brica de camisetas produz os tamanhos pequeno, m�dio e grande, cada uma sendo vendida respectivamente por 10, 12 e 15 reais.
Construa um algoritmo em que o usu�rio forne�a a quantidade de camisetas
pequenas, m�dias e grandes referentes a uma venda, e a m�quina informe quanto ser� o valor arrecadado. */

int main()
{
      float p,m,g,t;

    /* Pede para o usu�rio quantas camisetas P: */
    printf("Digite a quantidade vendida de camisetas P: \n");
    scanf("%f",&p);

      /* Pede para o usu�rio quantas camisetas M: */
    printf("Digite a quantidade vendida de camisetas M: \n");
    scanf("%f",&m);

      /* Pede para o usu�rio quantas camisetas G: */
    printf("Digite a quantidade vendida de camisetas G: \n");
    scanf("%f",&g);

    /* C�lculo: */
    t=p*10+m*12+g*15;

    /*Exibe o resultado para o usu�rio: */
    printf("\n O valor arrecadado com as vendas foi de R$ %.2f .\n \n",t);

    return 0;
}
