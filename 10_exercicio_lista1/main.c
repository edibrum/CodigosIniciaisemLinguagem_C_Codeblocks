#include <stdio.h>
#include <stdlib.h>
/* EXERC�CIO 10: Construa um algoritmo para calcular a dist�ncia entre dois pontos do plano cartesiano. Cada ponto � um par
ordenado (x,y). */

int main()
{
    int a,b,p,q;
    float d;

    /* Pede para a coordenada x do primeiro ponto: */
    printf("Digite a coordenada x do primeiro ponto: \n");
    scanf("%d",&a);

    /* Pede para a coordenada y do primeiro ponto: */
    printf("Digite a coordenada y do primeiro ponto: \n");
    scanf("%d",&b);

     /* Pede para a coordenada x do segundo ponto: */
    printf("Digite a coordenada x do segundo ponto: \n");
    scanf("%d",&p);

    /* Pede para a coordenada y do segundo ponto: */
    printf("Digite a coordenada y do segundo ponto: \n");
    scanf("%d",&q);

    /* C�lculo: */
    d=sqrt((p-a)*(p-a)+(q-b)*(q-b));

    /*Exibe o resultado para o usu�rio: */
    printf("\n A distancia entre os pontos (%d,%d) e (%d,%d) e aproximadamente: %.2f .\n",a,b,p,q,d);

    return 0;
}
