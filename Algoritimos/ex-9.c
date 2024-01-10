#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void){
    
    //Para acentuação brasileira
    setlocale(LC_ALL, "Portuguese_Brazil");

    //Declaração de variáveis
    int codigoProduto, quantidade;
    float valorFinal;

    int codigos[4] = {1, 2, 3, 4, 5};
    float precos[5] = {5.00, 3.50, 4.80, 8.90, 7.32};

    //Imprimir tabela de códigos e valores
    printf("---------------------------------------\n");
    printf("|Código do Produto | Preço do Produto| \n");
    printf("---------------------------------------\n");
    printf("|        1         |      R$5,00     | \n");
    printf("|        2         |      R$3,50     | \n");
    printf("|        3         |      R$4,80     | \n");
    printf("|        4         |      R$8,90     | \n");
    printf("|        5         |      R$7,32     | \n");
    printf("---------------------------------------\n");

    //Lê o código do produto
    printf("\n\033[0;34m Código do produto comprado: \n");
        scanf("%d", &codigoProduto);

    //Lê se o produto está na lista
    if (codigoProduto < 1 || codigoProduto > 5) {
        printf("\n\033[0;31m Não temos esse codigo ainda na loja.!\n");
            return 1;
    }
    
    //Lê a quantidade de produtos
    printf("\n Digite a quantidade comprada: \n");
        scanf("%d", &quantidade);

    //Calcúla o valor total do produto
    float valorTotal = precos[codigoProduto - 1] * quantidade;

    //Imprimi o valor total dos produtos
    printf("\033[0;32m\n Valor a ser pago: R$%.2f\n", valorTotal);

    return 0;
}