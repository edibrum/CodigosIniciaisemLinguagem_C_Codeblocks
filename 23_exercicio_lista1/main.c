#include <stdio.h>
#include <stdlib.h>
/* EXERC�CIO 23: Num dia de sol, voc� deseja medir a altura de um pr�dio, por�m, a trena n�o � suficientemente longa. Assumindo
que seja poss�vel medir sua sombra e a do pr�dio no ch�o, e que voc� lembre da sua altura, fa�a um algoritmo para ler os dados
necess�rios e calcular a altura do pr�dio. */

int main()
{

    float a,s,x,c;

    /* Pede para o usu�rio digitar os dados: */
    printf("Digite a sua altura em metros: \n");
    scanf("%f",&a);

    printf("Digite o comprimento da sua sombra em metros: \n");
    scanf("%f",&s);

    printf("Digite o comprimento da sombra do predio em metros: \n");
    scanf("%f",&c);

    /*C�lculo*/
    x=(a*c)/s;

    printf("A altura do predio e de aproximadamente %.2f metros. \n",x);

    return 0;
}
