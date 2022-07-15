#include <stdio.h>
#include <stdlib.h>
/* EXERCÍCIO 7: Entrar com o dia e o mês de uma data e informar quantos dias se passaram desde o início do ano. Esqueça
a questão dos anos bissextos e considere sempre que um mês possui 30 dias. */

int main()
{
    int a,b,m,n,total;

    /* Pede para o usuário inserir o dia: */
    printf("Digite o dia: \n");
    scanf("%d",&a);

    /* Pede para o usuário inserir o mês: */
    printf("Digite o codigo (numero) do mês: \n 1 - Janeiro \n 2 - Fevereiro \n 3 - Marco \n 4 - Abril \n ... - ... \n 12 - Dezembro \n \n ");
    scanf("%d",&b);

    /* Cálculo: */
    m=30-a;
    n=(b-1)*30;
    total=m+n;

    /*Exibe o resultado para o usuário: */
    printf("\n Ja se passaram %d dias do ano. \n \n",total);


    return 0;
}
