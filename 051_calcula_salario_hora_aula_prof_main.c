#include <stdio.h>
#include <stdlib.h>
/*LISTA 2:
EXERCÍCIO 11: Uma escola faz o pagamento de seus professores por hora/aula. Faça um algoritmo que solicite ao usuário, o nível do professor e a
quantidade de horas/aula ele tem na semana. Em seguida, calcule e exiba o salário de um professor sabendo que a fórmula para o cálculo do salário
é 𝑠𝑠𝑠𝑠𝑠𝑠 = 𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣 ∗ 𝑞𝑞𝑞𝑞𝑞𝑞𝑞𝑞𝑞𝑞𝑞𝑞𝑞𝑞 ∗ 4.5. O valor da hora/aula do professor é dado em função do seu nível:
Professor Nível 1 R$12,00 por hora/aula
Professor Nível 2 R$17,00 por hora/aula
Professor Nível 3 R$25,00 por hora/aula
*/
int main()
{
    int nivel,horas;
    float salario;

    /*Pede ao usuário que digite os dados:*/
    printf("Digite o nivel do professor ( 1, 2 ou 3): \n");
    scanf("%d",&nivel);

    printf("Digite quantas horas o professor lecionou: \n");
    scanf("%d",&horas);

    if (nivel==1)
    {
        salario=12.00*horas;
    }
    else if(nivel==2)
    {
        salario=17.00*horas;
    }
    else if(nivel==3)
    {
        salario=25.00*horas;
    }

    printf("O valor do salario e: R$ %.2f .\n",salario);

    return 0;
}
