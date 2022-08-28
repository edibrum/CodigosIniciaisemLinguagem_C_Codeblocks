#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*LISTA 3
17) Em um restaurante Self-Service, o pre�o do quilo custa R$ 23,59. Crie um algoritmo que, para cada cliente, leia o peso do prato
e valor gasto com bebida e calcule o valor total da conta que o cliente ir� pagar [ valor da conta = bebida + (peso * 15) ].
S� encerre a execu��o quando o peso do prato digitado for igual a 0 e o valor da bebida for tamb�m igual a 0. */

int main()
{
    /* Para poder usar acentos e etc.:*/
    setlocale(LC_ALL, "Portuguese");

    /* Declara a vari�veis: */
    float peso,bebida,total;

    /* Pede ao usu�rio que digite os valores das vari�veis: */
    do{
    printf("***************************************************** \n Aten��o: o programa ser� encerrado SOMENTE quando os valores digitados forem iguais a ZERO! \n \n ***************************************************** \n \n");
    printf("Digite o peso do prato em Kg:\n");
    scanf("%f",&peso);

    printf("Digite o valor gasto com bebida em R$:\n");
    scanf("%f",&bebida);

    /* Calcula: */
    total=(peso*23.59)+bebida;

    /* Mostra ao usu�rio o resultado: */
    printf("\n TOTAL A PAGAR: R$ %.2f \n",total);
    } while (total!=0);

    printf("\n ################################ \n Programa finalizado! \n ################################");

    return 0;
}
