#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/* LISTA EXTRA
5)Escreva uma função que recebe um número ponto flutuante n passado por parâmetro e devolve a raiz quadrada de n. */

/* LISTA AS FUNÇÕES: */
float enunciado_receber_valores (float numero);
float raiz_quadrada(float numero);
int verifica_sinal(float numero);


/*VARIÁVEIS GLOBAIS: */
    float numero,resultado;

/*FUNÇÃO PRINCIPAL: */
int main(){

    setlocale(LC_ALL,"");

    /* Chama a função para ler o número que o usuário vai digitar: */
    numero=enunciado_receber_valores(numero);
    //printf("\n NUMERO RECEBIDO DO USUÁRIO: %.1f",numero);

    /* Chama a função para verificar se temos um número POSITIVO ou NEGATIVO e mostra o respectivo resultado: */
    if (verifica_sinal(numero)==+1){
    resultado=raiz_quadrada(numero);

    /* Mostra o resultado para o usuário: */
    printf("\n A RAIZ QUADRADA DO NÚMERO %.1f É APROXIMADAMENTE: %.1f \n \n",numero,resultado);
    }

    else if(verifica_sinal(numero)==-1)
    printf("\n Não é possível calcular a raiz quadrada de número NEGATIVO! \n \n");

}


/* Função para ler o número que o usuário vai digitar: */
float enunciado_receber_valores (float numero){
    printf("\n Digite um número: ");
    scanf("%f",&numero);
    return numero;
}


/* Função para verificar, caso o número seja negativo: */
int verifica_sinal(float numero){
    if (numero>=0)
    return +1;

    else if (numero<0)
    return -1;
}


/* Função para verificar calcular a raíz quadrada: */
float raiz_quadrada(float numero)
{
    float raiz=0;
    raiz = sqrt(numero);
    //printf("\n NUMERO RECEBIDO NA FUNÇÃO: %.1f",numero);
    //printf("\n RAIZ CALCULADA NA FUNÇÃO: %.1f",raiz);
    return raiz;
}
