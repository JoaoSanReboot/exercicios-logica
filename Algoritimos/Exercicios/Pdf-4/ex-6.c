#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void){
    
    //Para acentua��o brasileira
    setlocale(LC_ALL, "Portuguese_Brazil");

    //Declara��o de vari�veis
    float glicose;

    printf("Informe a media da glicose: \n");
        scanf("%f", &glicose);

    if(glicose <= 100){
        printf("\033[0;32m Classifica��o: Glicose normal");
    }
    else if(glicose > 100 && glicose <= 140){
        printf("\n\033[0;34m Classifica��o: Glicose Elevada");
    }
    else if(glicose > 140){
        printf("\n\033[0;31mClassifica��o: Diabetes");
    }
}