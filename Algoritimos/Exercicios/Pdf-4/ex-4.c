#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void){
    
    //Para acentua��o brasileira
    setlocale(LC_ALL, "Portuguese_Brazil");

    //Declara��o de vari�veis
    int minutos = 0, minutosExtras;
    float valorFinal = 50.00;

    //Ler o valor de minutos
    printf("Voc� tem direito a 100 minutos com um plano de R$50,00 \n");
    printf("Qualquer minuto excedido os 100 do plano b�sico ser� cobrado uma taxa de R$2,00 por minuto.\n");
    printf("Informe a quantidade de minutos usada: \n");
    scanf("%d", &minutos);

    //Se a quantidade de minutos for 0
    if(minutos == 0){

        printf("\n Voc� n�o utilizou o plano");
    }
    //Se for menor ou igual a 100, o valor do plano b�sico ser� pago
    else if(minutos <= 100){

        printf("\n Voc� utilizou %d minutos.\033[0;32mValor a pagar R$50.00", minutos);
    }
    //Se for maior que 100, cobrar o plano + a taxa extra de minutos
    else if(minutos > 100){

            //Equa��o matem�tica para calcular os minutos extras e soma-los no plano
            minutosExtras = minutos - 100;
            valorFinal = 50.00 + (minutosExtras * 2);

            //Imprimir a conta final
            printf("\nSeus minutos excederam seu plano b�sico de R$50.00. ");
            printf("Ser� acrecentado uma taxa de R$2.00 a cada minuto excedido. \n");
            printf("\n\033[0;34m Minutos utilizados: %d", minutos);
            printf("\n\033[0;31m Valor da taxa a ser cobrada: %.2f", valorFinal);
    }


}