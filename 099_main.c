#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* Escreva uma fun��o que recebe um n�mero inteiro n passado por par�metro e devolve o maior n�mero
primo que � menor ou igual a n. */

int encontra_maior_primo (int numero);

int main(){

    setlocale(LC_ALL,"");

    int numero=-2;

    printf("\n Digite um n�mero inteiro positivo entre 0 e 100: \n");
    scanf("%d",&numero);


    if(numero>=0 && numero<=100){
    encontra_maior_primo (numero);
    printf("\n Maior n�mero primo que � MENOR OU IGUAL ao n�mero %d � o: %d \n",numero,encontra_maior_primo(numero));
    }

    else
    printf("\n \n Valor inv�lido! Reinicie o programa e PRESTE MAIS ATEN��O �s orienta��es!\n");

    return 0;
}


int encontra_maior_primo (int numero){
        int maior_primo=0,i=0;
        int vet_primos[24]={3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};

        do{
        maior_primo=vet_primos[i];
        i++;
        }while(numero>=vet_primos[i]);

return maior_primo;
}
