#include <stdio.h>
#include <stdlib.h>
/* EXERC�CIO 7: Entrar com o dia e o m�s de uma data e informar quantos dias se passaram desde o in�cio do ano. Esque�a
a quest�o dos anos bissextos e considere sempre que um m�s possui 30 dias. */

int main()
{
    int a,b,m,n,total;

    /* Pede para o usu�rio inserir o dia: */
    printf("Digite o dia: \n");
    scanf("%d",&a);

    /* Pede para o usu�rio inserir o m�s: */
    printf("Digite o codigo (numero) do m�s: \n 1 - Janeiro \n 2 - Fevereiro \n 3 - Marco \n 4 - Abril \n ... - ... \n 12 - Dezembro \n \n ");
    scanf("%d",&b);

    /* C�lculo: */
    m=30-a;
    n=(b-1)*30;
    total=m+n;

    /*Exibe o resultado para o usu�rio: */
    printf("\n Ja se passaram %d dias do ano. \n \n",total);


    return 0;
}
