#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/* LISTA EXTRA
5)Escreva uma fun��o que recebe um n�mero ponto flutuante n passado por par�metro e devolve a raiz quadrada de n. */

/* LISTA AS FUN��ES: */
float enunciado_receber_valores (float numero);
float raiz_quadrada(float numero);
int verifica_sinal(float numero);


/*VARI�VEIS GLOBAIS: */
    float numero,resultado;

/*FUN��O PRINCIPAL: */
int main(){

    setlocale(LC_ALL,"");

    /* Chama a fun��o para ler o n�mero que o usu�rio vai digitar: */
    numero=enunciado_receber_valores(numero);
    //printf("\n NUMERO RECEBIDO DO USU�RIO: %.1f",numero);

    /* Chama a fun��o para verificar se temos um n�mero POSITIVO ou NEGATIVO e mostra o respectivo resultado: */
    if (verifica_sinal(numero)==+1){
    resultado=raiz_quadrada(numero);

    /* Mostra o resultado para o usu�rio: */
    printf("\n A RAIZ QUADRADA DO N�MERO %.1f � APROXIMADAMENTE: %.1f \n \n",numero,resultado);
    }

    else if(verifica_sinal(numero)==-1)
    printf("\n N�o � poss�vel calcular a raiz quadrada de n�mero NEGATIVO! \n \n");

}


/* Fun��o para ler o n�mero que o usu�rio vai digitar: */
float enunciado_receber_valores (float numero){
    printf("\n Digite um n�mero: ");
    scanf("%f",&numero);
    return numero;
}


/* Fun��o para verificar, caso o n�mero seja negativo: */
int verifica_sinal(float numero){
    if (numero>=0)
    return +1;

    else if (numero<0)
    return -1;
}


/* Fun��o para verificar calcular a ra�z quadrada: */
float raiz_quadrada(float numero)
{
    float raiz=0;
    raiz = sqrt(numero);
    //printf("\n NUMERO RECEBIDO NA FUN��O: %.1f",numero);
    //printf("\n RAIZ CALCULADA NA FUN��O: %.1f",raiz);
    return raiz;
}
