/* LISTA EXTRA
6) Considere o c�digo em C abaixo:

a) Determine quais s�o as vari�veis locais e globais deste programa, identificando a que fun��o
pertence cada vari�vel local.

b) Mostre o que ser� impresso na tela do computador quando for executado este programa.

*/

#include <stdio.h>
/* VARI�VEIS GLOBAI: */
int soma1(int q, int c);
int soma2(int ra);
int i = 10;
int j = 20;


int main(){

int i,k,ra,p;
p = 10; // VARI�VEL LOCAL da main
ra = 5; // VARI�VEL LOCAL da main
for(i = 0; i< 3; i++){
k = soma1(ra, p);
ra = soma2(k);
printf("%d, %d\n",ra, k);
//b) Mostre o que ser� impresso na tela do computador quando for executado este programa.
//k=5+10+10=25 >> ra=soma2(25)=25+20=45 >>> vai imprimir " 45 , 25 "
//k=45+10+10=65 >> ra=soma2(65)=65+20=85 >>> vai imprimir " 85 , 65 "
//k=85+10+10=105 >> ra=soma2(105)=105+20=125 >>> vai imprimir " 125 , 105 "
}
}

int soma1(int q, int c){
int soma = q+i+c; // VARI�VEL LOCAL de soma1
return soma;
}

int soma2(int ra){
int k = j; // VARI�VEL LOCAL de soma2
ra = ra + k; // VARI�VEL LOCAL de soma2
return ra;
}
