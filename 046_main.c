#include <stdio.h>
#include <stdlib.h>
/*LISTA 2:
 EXERCÍCIO 6: Escreva um algoritmo que leia três valores inteiros e diferentes e mostre-os em ordem decrescente. */

int main()
{
    int a,b,c,m1,m2,m3;
    /* Pede ao usuário que digite os três números: */
    printf("Digite o primeiro numero \n");
    scanf("%d",&a);

    printf("Digite o segundo numero \n");
    scanf("%d",&b);

    printf("Digite o terceiro numero \n");
    scanf("%d",&c);

    /* a - b - c: */
    if (((a>b) && (a>c)) && (b>c))
        {
        m1=a;
        m2=b;
        m3=c;
    }
   /* a - c - b: */
    if (((a>b) && (a>c)) && (c>b))
        {
        m1=a;
        m2=c;
        m3=b;
    }
    /* b - a - c: */
     if (((b>a) && (b>c)) && (a>c))
        {
        m1=b;
        m2=a;
        m3=c;
    }
    /* b - c - a: */
    if (((b>a) && (b>c)) && (c>a))
        {
        m1=b;
        m2=c;
        m3=a;
    }
    /* c - a - b: */
    if (((c>a) && (c>b)) && (a>b))
        {
        m1=c;
        m2=a;
        m3=b;
    }
      /* c - b - a: */
    if (((c>a) && (c>b)) && (b>a))
        {
        m1=c;
        m2=b;
        m3=a;
    }
    printf("A ordem decrescente e: %d, %d, %d. \n",m1,m2,m3);

    return 0;
}
