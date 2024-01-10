#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void){
    
    //Para acentuação brasileira
    setlocale(LC_ALL, "Portuguese_Brazil");

    //Declarção de variáveis
    float valorUni, pagamento, valorFinal;
    int quantidade;

    //Ler condições da pergunta
    printf("Informe o valor unitário do produto: \n");
        scanf("%f", &valorUni);

    printf("Informe a quantidade de produtos comprada: \n");
        scanf("%d", &quantidade);

    printf("Informe o valor efetuado no pagamento: \n");
        scanf("%f", &pagamento);    

    //Calcúlo para saber o valor final e o troco
    valorFinal = valorUni * quantidade;

    //Se o pagamento for menor que o valor final
    if (valorFinal > pagamento)
    {
        valorFinal = valorFinal - pagamento;
        printf("\n\033[0;31m Pagamento insuficiente falta: %.2f", valorFinal);
    }
    //Se o pagamento for necessário devolver troco
    else{
        valorFinal = pagamento - valorFinal;
        printf("\033[0;32m Troco recebido: %.2f", valorFinal);
    }
}