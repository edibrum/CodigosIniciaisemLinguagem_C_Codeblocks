#include <stdio.h>
#include <stdlib.h>
/* EXERC�CIO 15: Tr�s amigos, Carlos, Andr� e Felipe, decidiram rachar igualmente a conta de um bar. Fa�a um algoritmo para
ler o valor total da conta e imprimir quanto cada um deve pagar, mas fa�a com que Carlos e Andr� n�o paguem centavos. Ex: uma conta de R$101,53 resulta em R$33,00 para Carlos, R$33,00 para Andr� e R$35,53
para Felipe. */

int main()
{
    float conta,d,carlos,andre,felipe;

    /* Pede para o usu�rio digitar o valor da conta: */
    printf("Digite o valor total da conta: \n");
    scanf("%f",&conta);

    /* C�lculo:*/
    d=conta/3;
    carlos=andre=(int)d;
    felipe=conta-(carlos+andre);


    /*Exibe os resultados para o usu�rio: */
    printf("\n Valores a pagar: \n Andre=R$ %.2f \n Carlos=R$ %.2f \n Felipe=R$ %.2f \n",andre,carlos,felipe);
    return 0;
}
