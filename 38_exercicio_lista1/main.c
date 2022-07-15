#include <stdio.h>
#include <stdlib.h>
/* EXERCÍCIO 38: Faça um algoritmo que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:
a. a idade dessa pessoa em anos;
b. a idade dessa pessoa em meses;
c. a idade dessa pessoa em dias
d. a idade dessa pessoa em semanas. */

int main()
{
    int n,i,imes,idia,isemana;

    /*Pede ao usuário que digite seu ano de nascimento:*/
    printf("Digite seu ano de nascimento: \n");
    scanf("%d",&n);

    /*Cálculo:*/
    i=2022-n;
    imes=i*12;
    idia=imes*30;
    isemana=idia/4;

    /*Mostra o resultado ao usuário:*/
    printf("Sua idade e aproximadamente: \n %d anos \n %d meses \n %d dias \n %d semanas",i,imes,idia,isemana);

    return 0;
}
