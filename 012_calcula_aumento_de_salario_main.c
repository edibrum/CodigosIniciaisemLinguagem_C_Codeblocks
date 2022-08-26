#include <stdio.h>
#include <stdlib.h>
/* EXERCÍCIO 12: Faça um algoritmo para ler o salário de um funcionário e aumentá-Io em 15%. Após o aumento, desconte 8%
de impostos. Imprima o salário inicial, o salário com o aumento e o salário final. */

int main()
{
    float a,b,aumento,desconto;

    /* Pede para o usuário digitar o salário: */
    printf("Digite o salario: \n");
    scanf("%f",&a);

    /* Cálculos: */
    aumento=a*0.15;
    desconto=(a+aumento)*0.08;
    b=(a+aumento)-desconto;

    /*Exibe o resultado para o usuário: */
    printf("\n Salario inicial: R$ %.2f .\n Salario com aumento: R$ %.2f .\n Salario final: R$ %.2f .\n",a,a+aumento,b);
    return 0;
}
