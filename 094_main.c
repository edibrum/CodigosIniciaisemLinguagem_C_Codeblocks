#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Escreva uma função que computa a potência a^b para valores a (double) e b (int) passados por parâmetro
(não use bibliotecas como math.h). Use a função anterior e crie um programa que imprima todas as potências:
2^0, 2^1, ..., 2^10, 3^0, ..., 3^10, ..., 10^10. */

void calcula_potencia(double base, int expoente);

int main()
{
    setlocale(LC_ALL,"Portuguese");

    double base;
    int expoente;

    printf("\n VAMOS CALCULAR AS DEZ PRIMEIRAS POTÊNCIAS DE UM NÚMERO INTEIRO \n");
    calcula_potencia(base,expoente);

    return 0;
}

void calcula_potencia(double base, int expoente){

    double potencia=1.00;
    printf("Digite o valor da base:  ");
    scanf("%lf",&base);

    expoente==0;
    printf("\n POTÊNCIAS DO NÚMERO %.2lf \n %.2lf ^ %d = %d",base,base,expoente,potencia);

    for(int expoente=1;expoente<=10;expoente++){

            for(int i=1;i<=expoente;i++){
                potencia=potencia*base;
            }
        printf("\n %.2lf ^ %d = %.2lf",base,expoente,potencia);
        potencia=1.00;
    }
}
