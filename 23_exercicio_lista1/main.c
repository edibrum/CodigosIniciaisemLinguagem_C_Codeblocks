#include <stdio.h>
#include <stdlib.h>
/* EXERCÍCIO 23: Num dia de sol, você deseja medir a altura de um prédio, porém, a trena não é suficientemente longa. Assumindo
que seja possível medir sua sombra e a do prédio no chão, e que você lembre da sua altura, faça um algoritmo para ler os dados
necessários e calcular a altura do prédio. */

int main()
{

    float a,s,x,c;

    /* Pede para o usuário digitar os dados: */
    printf("Digite a sua altura em metros: \n");
    scanf("%f",&a);

    printf("Digite o comprimento da sua sombra em metros: \n");
    scanf("%f",&s);

    printf("Digite o comprimento da sombra do predio em metros: \n");
    scanf("%f",&c);

    /*Cálculo*/
    x=(a*c)/s;

    printf("A altura do predio e de aproximadamente %.2f metros. \n",x);

    return 0;
}
