#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void){
    
    //Para acentua��o brasileira
    setlocale(LC_ALL, "Portuguese_Brazil");

    //Declara��o de vari�veis
    int codigoProduto, quantidade;
    float valorFinal;

    int codigos[4] = {1, 2, 3, 4, 5};
    float precos[5] = {5.00, 3.50, 4.80, 8.90, 7.32};

    //Imprimir tabela de c�digos e valores
    printf("---------------------------------------\n");
    printf("|C�digo do Produto | Pre�o do Produto| \n");
    printf("---------------------------------------\n");
    printf("|        1         |      R$5,00     | \n");
    printf("|        2         |      R$3,50     | \n");
    printf("|        3         |      R$4,80     | \n");
    printf("|        4         |      R$8,90     | \n");
    printf("|        5         |      R$7,32     | \n");
    printf("---------------------------------------\n");

    //L� o c�digo do produto
    printf("\n\033[0;34m C�digo do produto comprado: \n");
        scanf("%d", &codigoProduto);

    //L� se o produto est� na lista
    if (codigoProduto < 1 || codigoProduto > 5) {
        printf("\n\033[0;31m N�o temos esse codigo ainda na loja.!\n");
            return 1;
    }
    
    //L� a quantidade de produtos
    printf("\n Digite a quantidade comprada: \n");
        scanf("%d", &quantidade);

    //Calc�la o valor total do produto
    float valorTotal = precos[codigoProduto - 1] * quantidade;

    //Imprimi o valor total dos produtos
    printf("\033[0;32m\n Valor a ser pago: R$%.2f\n", valorTotal);

    return 0;
}