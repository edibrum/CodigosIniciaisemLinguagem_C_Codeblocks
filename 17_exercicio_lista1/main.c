#include <stdio.h>
#include <stdlib.h>
/* EXERC�CIO 17: Alguns pa�ses medem temperaturas em graus Celsius, e outros em graus Fahrenheit. Fa�a um algoritmo
para ler uma temperatura Celsius e imprimi-Ia em Fahrenheit (pesquise como fazer este tipo de convers�o). */

int main()
{
    float c,f;

    /* Pede para o usu�rio digitar a temperatura em Celsius: */
    printf("Digite a temperatura em Celsius: \n");
    scanf("%f",&c);

    /* C�lculo:*/
    f=c*1.8+32;

    /*Exibe o resultado para o usu�rio: */
    printf("\n A temperatura em Fahrenheit e: %.2f \n.",f);
    return 0;
}
