#include <stdio.h>
#include <stdlib.h>
/* EXERCÍCIO 13: Ler um número inteiro (assuma até três dígitos) e imprimir a saída da seguinte forma: CENTENA = x
DEZENA = x
UNIDADE = x */

int main()
{
     int a,u,d,c;

    /* Pede para o usuário digitar o número inteiro: */
    printf("Digite o numero inteiro de ate tres ordens: \n");
    scanf("%d",&a);

    /* Cálculos:*/
    c=a/100;
    d=(a-(c*100))/10;
    u=a-(c*100)-(d*10);

    /*Exibe o resultado para o usuário: */
    printf("\n Resultado: \n CENTENA=%d \n DEZENA=%d \n UNIDADE=%d \n",c,d,u);
    return 0;
}
