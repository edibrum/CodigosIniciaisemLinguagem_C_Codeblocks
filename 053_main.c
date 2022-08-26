#include <stdio.h>
#include <stdlib.h>
/*LISTA 2:
EXERCÍCIO 13: . Escrever um algoritmo que leia um valor em reais e calcule qual o menor número possível de notas de 100,
50, 10, 5 e 1 em que o valor lido pode ser decomposto. Escrever o valor lido e a relação de notas necessárias.
*/
int main()
{
    float valor;
    int cem,cinq,dez,cinco,um;

    /*Pede para o usuário digitar os dados:*/
    printf("Digite o valor em reais: \n");
    scanf("%f",&valor);

    /*Calculos:*/
    cem=valor/100;
    cinq=(valor-(cem*100))/50;
    dez=(valor-(cem*100)-(cinq*50))/10;
    cinco=(valor-(cem*100)-(cinq*50)-(dez*10))/5;
    um=valor-(cem*100)-(cinq*50)-(dez*10)-(cinco*5);

    /*Mostra os resultados:*/
    printf("O valor de R$ %.2f pode ser decomposto em: \n",valor);
    printf("%d notas de R$100,00: \n %d notas de R$50,00: \n %d notas de R$10,00: \n %d notas de R$5,00: \n %d notas de R$1,00: \n",cem,cinq,dez,cinco,um);



    return 0;
}
