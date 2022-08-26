#include <stdio.h>
#include <stdlib.h>
/* EXERCÍCIO 9: Uma fábrica de camisetas produz os tamanhos pequeno, médio e grande, cada uma sendo vendida respectivamente por 10, 12 e 15 reais.
Construa um algoritmo em que o usuário forneça a quantidade de camisetas
pequenas, médias e grandes referentes a uma venda, e a máquina informe quanto será o valor arrecadado. */

int main()
{
      float p,m,g,t;

    /* Pede para o usuário quantas camisetas P: */
    printf("Digite a quantidade vendida de camisetas P: \n");
    scanf("%f",&p);

      /* Pede para o usuário quantas camisetas M: */
    printf("Digite a quantidade vendida de camisetas M: \n");
    scanf("%f",&m);

      /* Pede para o usuário quantas camisetas G: */
    printf("Digite a quantidade vendida de camisetas G: \n");
    scanf("%f",&g);

    /* Cálculo: */
    t=p*10+m*12+g*15;

    /*Exibe o resultado para o usuário: */
    printf("\n O valor arrecadado com as vendas foi de R$ %.2f .\n \n",t);

    return 0;
}
