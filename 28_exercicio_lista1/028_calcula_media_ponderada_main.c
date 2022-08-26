#include <stdio.h>
#include <stdlib.h>
/* EXERCÍCIO 28: Faça um algoritmo que receba duas notas, calcule e mostre a média ponderada dessas notas, considerando
peso 2(4) para a primeira nota e peso 3(6) para a segunda nota.
Obs.: alterei para 4 e 6 para fechar os 10. */

int main()
{
    float n1,n2,mediaponderada;

    /*Pede para o usuário digitar as notas e recebe os valores:*/
    printf("Digite a primeira nota:\n");
    scanf("%f",&n1);

    printf("Digite a segunda nota:\n");
    scanf("%f",&n2);

    /*Calculo:*/
    mediaponderada=n1*0.4+n2*0.6;

    /*Retorna a media para o usuário:*/
    printf("A media ponderada e: %.2f .\n",mediaponderada);

    return 0;
}
