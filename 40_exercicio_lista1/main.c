#include <stdio.h>
#include <stdlib.h>
/* EXERCÍCIO 40: Faça um algoritmo que receba o valor dos catetos de um triângulo, calcule e mostre o valor da hipotenusa. */

int main()
{
    float c1,c2,h;

    /*Pede que o usuário digite os valores dos catetos:*/
    printf("Digite o valor do primeiro cateto: \n");
    scanf("%f",&c1);

    printf("Digite o valor do segundo cateto: \n");
    scanf("%f",&c2);

    /*Cálculo:*/
    h=sqrt((c1*c1)+(c2*c2));

    /*Mostra o resultado ao usuário:*/
    printf("Se o triangulo existir, o valor da hipotenusa sera de aproximadamente: %.2f . \n",h);


    return 0;
}
