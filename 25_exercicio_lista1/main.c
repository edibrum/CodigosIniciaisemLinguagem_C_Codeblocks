#include <stdio.h>
#include <stdlib.h>
/* EXERC�CIO 25: Calcule o volume de uma caixa d'�gua cil�ndrica. */

int main()
{
    float raio,altura,volume;

    /* Pede para o usu�rio digitar os valores: */
    printf("Digite a altura do cilindro em metros: \n");
    scanf("%f",&altura);

    printf("Digite o raio cilindro em metros: \n");
    scanf("%f",&raio);

    /* C�lculo: */
    volume=altura*(raio*raio*3.14);

    /* Mostra os resultados: */
    printf("O volume da caixa de agua e de aproximadamente: %.2f metros cubicos. \n",volume);

    return 0;
}
