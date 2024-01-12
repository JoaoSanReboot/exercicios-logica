#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void){
    
    //Para acentuação brasileira
    setlocale(LC_ALL, "Portuguese_Brazil");

    //Declaração de variáveis
    float eixoX, eixoY;

    //Lê as informações digitas pelo usuário
    printf("Digite os valores do eixo X e Y: \n");

    printf("\nEixo X: ");
        scanf("%f", &eixoX);

    printf("\nEixo Y: ");
        scanf("%f", &eixoY);

    //Indentifica qual eixo ou quadrante está os eixos informados
    if(eixoX == 0 && eixoY ==0){

        printf("\nOrigem");
    }
    else if(eixoX == 0){

        printf("\nEixo X");
    }
    else if(eixoY == 0){
        
        printf("\nEixo Y");
    }

    if(eixoX > 0 && eixoY >0){
        printf("\nQuadrante 1");
    }
    else if(eixoX < 0 && eixoY > 0){

        printf("\nQuadrante 2");
    }
    else if(eixoX < 0 && eixoY < 0){

        printf("\nQuadrante 3");
    }
    else if(eixoX > 0 && eixoY < 0){

        printf("\nQuadrante 4");
    }
}