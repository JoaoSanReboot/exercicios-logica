#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void){
    
    //Para acentua�?o brasileira
    setlocale(LC_ALL, "Portuguese_Brazil");

    //Declara�?o de vari�veis
    float nota1, nota2, media;

    printf("Digite a nota do primeiro semestre: \n");
    scanf("%f", &nota1);

    printf("Digite a nota do segundo semestre: \n");
    scanf("%f", &nota2);

    //Calc�lo de m�dia
    media = nota1 + nota2;

    //If para dicernir a m�dia
    if(media >= 60.0){

        printf("\033[1;32m Parab�ns voc� foi aprovado sua m�dia total foi: %.1f", media);
    }
    else{
        printf("\033[1;31m Sinto muito sua nota foi abaixo da m�dia voc� foi reprovado! \n");
        printf("\033[1;31m Sua m�dia total �: %.1f", media);
    }

    return 0;

} 