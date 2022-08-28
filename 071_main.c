#include <stdio.h>
#include <stdlib.h>
#include <string.h> /*A biblioteca <string.h> ser� �til quando precisarmos manipular vari�veis do tipo CHAR ou STRING! */

/*LISTA 3
14)Fa�a um algoritmo que escreva a diversas vezes a pergunta �Ol� tudo bem?� e leia a resposta do usu�rio
enquanto ele responde n�o. S� encerre a execu��o quando a resposta for igual a �Sim�. */

int main()
{
    char resposta[10];

    printf("ATENCAO: \n Responder 'nao' ou 'sim'. \n Obs.: Para encerrar responda 'sim'. \n \n ");
    printf("Ola, tudo bem? \n ");
    scanf("%s",resposta);

    /*Obs.: o comando STRCMP faz a comaparacao do valor recebido na vari�vel STRING/CHAR  e compara com o valor escrito entre "",
    devolvendo 0 para verdadeiro e (-1) para falso */
    while (strcmp(resposta,"sim") != 0)
    {
    if (strcmp(resposta,"nao") == 0)
        {
        printf("Ola, tudo bem? \n ");
        scanf("%s",resposta);
        }
            else
            {
            printf("********* VALOR INVALIDO ******** \n Tente novamente! \n \n Ola, tudo bem? \n ");
            scanf("%s",resposta);
            }
    }
    printf("Programa finalizado! \n \n");

    return 0;
}
