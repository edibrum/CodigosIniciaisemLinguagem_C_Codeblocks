#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/* LISTA EXTRA
Escreva uma função chamada teste que recebe um valor inteiro positivo n como parâmetro. Sua
função deve retornar um valor inteiro b tal que b^k = n para algum inteiro k, e b seja o menor possível.

VARIÁVEIS GLOBAIS: */
int b=0,potencia=1;

/* LISTA AS FUNÇÕES: */
int enunciado_receber_valor (int n);
void teste(int n);


int main()
{
    int n,numero;
    setlocale(LC_ALL,"");

    /* Chama a função para ler o número que o usuário vai digitar: */
    numero=enunciado_receber_valor(n);
    //printf("\n NUMERO RECEBIDO: %d",numero);

    /* Chama a função para testar e encontrar os dois inteiros da potencia: */
    teste(numero);
    //printf("\n %d",numero);

    return 0;
}


/* Função para ler o número que o usuário vai digitar: */
int enunciado_receber_valor (int n){
    printf("\n Digite um número: ");
    scanf("%d",&n);
    return n;
}

/* Função para testar e encontrar os dois inteiros da potencia: */
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
