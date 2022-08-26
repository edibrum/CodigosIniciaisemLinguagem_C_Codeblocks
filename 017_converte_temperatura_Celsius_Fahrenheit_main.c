#include <stdio.h>
#include <stdlib.h>
/* EXERCÍCIO 17: Alguns países medem temperaturas em graus Celsius, e outros em graus Fahrenheit. Faça um algoritmo
para ler uma temperatura Celsius e imprimi-Ia em Fahrenheit (pesquise como fazer este tipo de conversão). */

int main()
{
    float c,f;

    /* Pede para o usuário digitar a temperatura em Celsius: */
    printf("Digite a temperatura em Celsius: \n");
    scanf("%f",&c);

    /* Cálculo:*/
    f=c*1.8+32;

    /*Exibe o resultado para o usuário: */
    printf("\n A temperatura em Fahrenheit e: %.2f \n.",f);
    return 0;
}
