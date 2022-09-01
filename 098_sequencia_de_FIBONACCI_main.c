#include <stdio.h>
#include <stdlib.h>
/* LISTA 3
3) Escreva uma função que recebe um número inteiro n passado por parâmetro e devolve o primeiro número da
série de fibonacci que é maior ou igual a n. */

int main()
{
    int numero=-3,i=0;
    int vet_fibonacci[12]={0,1,1,2,3,5,8,13,21,34,55,89};

    printf("\n DIGITE UM NUMERO ENTRE 0 E 100: \n");
    scanf("%d",&numero);

    if(numero>=0 && numero<=100){
    printf("\n");

    do{
        printf("  %d  ",vet_fibonacci[i]);
        i++;
    }while(numero>=vet_fibonacci[i]);

    printf("\n O primeiro numero da serie de Fibonacci maior ou igual ao numero escolhido e: %d \n",vet_fibonacci[i]);
    }

    else{
    printf("Valor invalido! \n Leia as instrucoes com MAIS ATENCAO da proxima vez! \n");
    }

    return 0;
}
