#include <stdio.h>
#include <stdlib.h>
/*LISTA OPTATIVA:
4) Fa�a um programa que leia dois valores inteiros nas vari�veis x e y e troque o conte�do
das vari�veis. Refa�a este problema sem o uso de outras vari�veis que n�o x e y.
*/
int main()
{

    /* Cria duas vari�veis do tipo int(numeros inteiros) */
    int x,y,soma;

    /* Pede que o usu�rio digite os valores: */
    printf("Digite o valor de x (inteiro): \n");
    scanf("%d",&x);

    printf("Digite o valor de y (inteiro): \n");
    scanf("%d",&y);

    printf("Inicialmente: x = %d , e y = %d.\n",x,y);
    /* Troca os valores das variaveis: */
    soma=x+y;
    y=soma-y;
    x=soma-y;
    printf("\n Apos as trocas: x = %d , e y = %d.\n",x,y);

    return 0;
}
