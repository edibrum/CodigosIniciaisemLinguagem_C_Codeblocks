#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*LISTA OPTATIVA:
3) Faça um programa que leia um número real x e calcule o valor de:
f(x) = √x+ (x/2) +x(elevado ao x).
Obs.: Pesquise sobre as funções sqrt e pow.
*/
int main()
{
    /* Cria uma variavel do tipo float(numeros reais) */
    float a,funcao;

    /* Pede para o usuário digitar o valor de entrada "x" */
    printf("Digite um numero real 'x': \n");
    scanf("%f",&a);

    /* Calcula o valor de f(x): */
    funcao=sqrt(a)+(a/2)+pow(a,2);

    /* Mostra o resultado para o usuário: */
    printf("\n Aproximadamente, temos: \n x = %.2f \n",a);
    printf("f(x) = %.2f \n",funcao);

    return 0;
}
