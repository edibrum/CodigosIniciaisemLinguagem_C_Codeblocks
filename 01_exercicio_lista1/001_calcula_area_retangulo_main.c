#include <stdio.h>
#include <stdlib.h>
/* EXERCÍCIO 1: A imobiliária Imóbilis vende apenas terrenos retangulares. Faça um algoritmo para ler as dimensões de um
terreno e depois exibir a área do terreno. */

int main()
{
    float a,b,c;

    /*Pede as duas dimensões para o usuário: */
    printf("Digite a largura do terreno em metros: \n");
    scanf("%f",&a);

    printf("Digite a altura do terreno em metros: \n");
    scanf("%f",&b);

    /*Calcula a área: */
    c=a*b;

    /*Exibe o resultado (área) para o usuário: */
    printf("A area deste terreno e de %.2f metros quadrados.",c);

    return 0;
}
