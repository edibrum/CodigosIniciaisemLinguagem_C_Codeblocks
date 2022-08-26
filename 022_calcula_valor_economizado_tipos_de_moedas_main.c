#include <stdio.h>
#include <stdlib.h>
/* EXERCÍCIO 22: Pedrinho tem um cofrinho com muitas moedas, e deseja saber quantos reais conseguiu poupar. Faça um
algoritmo para ler a quantidade de cada tipo de moeda, e imprimir o valor total economizado, em reais.
Considere que existam moedas de 1, 5, 10, 25 e 50 centavos, e ainda moedas de 1 real. Não havendo moeda de
um tipo, a quantidade respectiva é zero. */

int main()
{
    int one,five,ten,quarter,fifty,real;
    float t1,t5,t10,t25,t50,tr;

    /* Pede ao usuário para digitar as quantidades e calcula o total relativo a cada tipo:*/
    printf("Digite a quantidade de  moedas de 1 centavos: \n");
    scanf("%d",&one);
    t1=one*0.01;

    printf("Digite a quantidade de  moedas de 5 centavos: \n");
    scanf("%d",&five);
    t5=five*0.05;

    printf("Digite a quantidade de  moedas de 10 centavos: \n");
    scanf("%d",&ten);
    t10=ten*0.1;

    printf("Digite a quantidade de  moedas de 25 centavos: \n");
    scanf("%d",&quarter);
    t25=quarter*0.25;

    printf("Digite a quantidade de  moedas de 50 centavos: \n");
    scanf("%d",&fifty);
    t50=fifty*0.5;

    printf("Digite a quantidade de  moedas de 1 real: \n");
    scanf("%d",&real);
    tr=real*1.00;

    /*Retorna o total economizado para o usuário: */
    printf("O total economizado foi de R$ %.2f \n", t1+t5+t10+t25+t50+tr);


    return 0;
}
