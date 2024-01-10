#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void){
    
    //Para acentuação brasileira
    setlocale(LC_ALL, "Portuguese_Brazil");

    //Declaração de variáveis
    float glicose;

    printf("Informe a media da glicose: \n");
        scanf("%f", &glicose);

    if(glicose <= 100){
        printf("\033[0;32m Classificação: Glicose normal");
    }
    else if(glicose > 100 && glicose <= 140){
        printf("\n\033[0;34m Classificação: Glicose Elevada");
    }
    else if(glicose > 140){
        printf("\n\033[0;31mClassificação: Diabetes");
    }
}