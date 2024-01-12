#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void){
    
    //Para acentuação brasileira
    setlocale(LC_ALL, "Portuguese_Brazil");

    //Declaração de variáveis
    int minutos = 0, minutosExtras;
    float valorFinal = 50.00;

    //Ler o valor de minutos
    printf("Você tem direito a 100 minutos com um plano de R$50,00 \n");
    printf("Qualquer minuto excedido os 100 do plano básico será cobrado uma taxa de R$2,00 por minuto.\n");
    printf("Informe a quantidade de minutos usada: \n");
    scanf("%d", &minutos);

    //Se a quantidade de minutos for 0
    if(minutos == 0){

        printf("\n Você não utilizou o plano");
    }
    //Se for menor ou igual a 100, o valor do plano básico será pago
    else if(minutos <= 100){

        printf("\n Você utilizou %d minutos.\033[0;32mValor a pagar R$50.00", minutos);
    }
    //Se for maior que 100, cobrar o plano + a taxa extra de minutos
    else if(minutos > 100){

            //Equação matemática para calcular os minutos extras e soma-los no plano
            minutosExtras = minutos - 100;
            valorFinal = 50.00 + (minutosExtras * 2);

            //Imprimir a conta final
            printf("\nSeus minutos excederam seu plano básico de R$50.00. ");
            printf("Será acrecentado uma taxa de R$2.00 a cada minuto excedido. \n");
            printf("\n\033[0;34m Minutos utilizados: %d", minutos);
            printf("\n\033[0;31m Valor da taxa a ser cobrada: %.2f", valorFinal);
    }


}