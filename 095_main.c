#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Escreva uma fun��o que computa a pot�ncia a^b para valores a (double) e b (int) passados por par�metro
(n�o use bibliotecas como math.h). Use a fun��o anterior e crie um programa que imprima todas as pot�ncias:
2^0, 2^1, ..., 2^10, 3^0, ..., 3^10, ..., 10^10. */

int main()
{
    setlocale(LC_ALL,"Portuguese");

    double base,potencia=1.00;
    int expoente;

    printf("Digite o valor da base: \n");
    scanf("%lf",&base);

    printf("Digite o valor do expoente: \n");
    scanf("%d",&expoente);

    if(expoente==0)
    printf("POT�NCIA: \n %d^%.2lf = %d",base,expoente,1);

    else{
        for(int i=1;i<=expoente;i++){
            potencia=potencia*base;
        }
        printf("POT�NCIA: \n %.2lf ^ %d = %.2lf",base,expoente,potencia);
    }

    return 0;
}
