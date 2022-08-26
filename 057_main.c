#include <stdio.h>
#include <stdlib.h>
/*LISTA 2:
EXERCÍCIO 17: Para uma lanchonete, escrever um algoritmo que leia o código do item pedido, a quantidade e calcule o valor
a ser pago por aquele lanche. Considere que a cada execução somente será calculado um item. O cardápio é o seguinte:
Produto Preço
1 - Cachorro quente R$11,00
2 - Bauru R$ 8,50
3 - Misto Quente R$ 8,00
4 - Hamburger R$ 9,00
5 - Cheeseburger R$10,00
6 - Refrigerante R$ 4,50
*/
int main()
{

    int opcao,n1=0,n2=0,n3=0,n4=0,n5=0,n6=0;
    float somatotal=0.00;

    do {
    printf("Menu: \n 1 - Hot Dog R$ 11.00 \n 2 - Bauru R$ 8.50 \n 3 - Misto Quente R$ 8.00 \n 4 - Hamburger R$ 9.00 \n 5 - Cheeseburger R$ 10.00 \n 6 - Refrigerante R$ 4.50 \n 7 - Nenhuma das opcoes/Finalizar pedido! \n");
    printf("\n Digite o numero da sua opcao: \n");
    scanf("%d",&opcao);

        switch(opcao){
        case (1):
        printf("Prato escolhido: Hot Dog \n \n");
        printf("Digite a quantidade: \n \n");
        scanf("%d",&n1);
        somatotal=somatotal+(n1*11.00);
        break;

        case (2):
        printf("Prato escolhido: Bauru \n \n");
        printf("Digite a quantidade: \n \n");
        scanf("%d",&n2);
        somatotal=somatotal+(n2*8.50);
        break;

        case (3):
        printf("Prato escolhido: Misto Quente \n \n");
        printf("Digite a quantidade: \n \n");
        scanf("%d",&n3);
        somatotal=somatotal+(n3*8.00);
        break;

        case(4):
        printf("Prato escolhido: Hamburger \n \n");
        printf("Digite a quantidade: \n \n");
        scanf("%d",&n4);
        somatotal=somatotal+(n4*9.00);
        break;

        case(5):
        printf("Prato escolhido: Cheeseburger \n \n");
        printf("Digite a quantidade: \n \n");
        scanf("%d",&n5);
        somatotal=somatotal+(n5*10.00);
        break;

        case(6):
        printf("Prato escolhido: Fatia de Bolo \n \n");
        printf("Digite a quantidade: \n \n");
        scanf("%d",&n6);
        somatotal=somatotal+(n6*4.50);
        break;

        case(7):
        printf("\n *** YEEEHHHH! *** \n PEDIDO FINALIZADO! \n");
        break;

        default:
        printf("Valor invalido! Faca uma opcao de acordo com o Menu! \n \n");
        }
    }
    while(opcao!=7);

        printf("\n OS PRATOS ESCOLHIDOS FORAM: \n %d - Hot Dog \n %d - Bauru \n %d - Misto Quente \n %d - Hamburger \n %d - Cheeseburger \n %d - Refrigerante \n",n1,n2,n3,n4,n5,n6);
        printf("\n \n Valor total a pagar: R$ %.2f \n \n",somatotal);

    return 0;
}
