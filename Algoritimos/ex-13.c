#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void){
    
    //Para acentua��o brasileira
    setlocale(LC_ALL, "Portuguese_Brazil");

    //Declara��o de vari�veis
    float eixoX, eixoY;

    //L� as informa��es digitas pelo usu�rio
    printf("Digite os valores do eixo X e Y: \n");

    printf("\nEixo X: ");
        scanf("%f", &eixoX);

    printf("\nEixo Y: ");
        scanf("%f", &eixoY);

    //Indentifica qual eixo ou quadrante est� os eixos informados
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