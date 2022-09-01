#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/* LISTA EXTRA
7) Escreva uma fun��o chamada teste que recebe um valor inteiro positivo n como par�metro. Sua
fun��o deve retornar um valor inteiro b tal que b^k = n para algum inteiro k, e b seja o menor poss�vel.

VARI�VEIS GLOBAIS: */
int b=0,potencia=1;

/* LISTA AS FUN��ES: */
int enunciado_receber_valor (int n);
void teste(int n);


int main()
{
    int n,numero;
    setlocale(LC_ALL,"");

    /* Chama a fun��o para ler o n�mero que o usu�rio vai digitar: */
    numero=enunciado_receber_valor(n);
    //printf("\n NUMERO RECEBIDO: %d",numero);

    /* Chama a fun��o para testar e encontrar os dois inteiros da potencia: */
    teste(numero);
    //printf("\n %d",numero);

    return 0;
}


/* Fun��o para ler o n�mero que o usu�rio vai digitar: */
int enunciado_receber_valor (int n){
    printf("\n Digite um n�mero: ");
    scanf("%d",&n);
    return n;
}

/* Fun��o para testar e encontrar os dois inteiros da potencia: */
void teste(int numero){
    int i=1,b,exp;

    for(int expoente=1;expoente<=10;expoente++){
        for(int base=1;base<=numero;base++){
            potencia=pow(base,expoente);
            b=base;
            exp=expoente;

            if(potencia<=numero){
                printf("\n %d : BASE %d  \\  ",i,b);
                printf(" EXPOENTE %d  \\  ",exp);
                printf(" POTENCIA %d  \\  ",potencia);
            }
        }
           i++;
    }


return b,exp;
}
