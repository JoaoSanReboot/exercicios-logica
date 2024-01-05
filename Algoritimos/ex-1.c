#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void){
    
    //Para acentuaç?o brasileira
    setlocale(LC_ALL, "Portuguese_Brazil");

    //Declaraç?o de variáveis
    float nota1, nota2, media;

    printf("Digite a nota do primeiro semestre: \n");
    scanf("%f", &nota1);

    printf("Digite a nota do segundo semestre: \n");
    scanf("%f", &nota2);

    //Calcúlo de média
    media = nota1 + nota2;

    //If para dicernir a média
    if(media >= 60.0){

        printf("\033[1;32m Parabéns vocé foi aprovado sua média total foi: %.1f", media);
    }
    else{
        printf("\033[1;31m Sinto muito sua nota foi abaixo da média você foi reprovado! \n");
        printf("\033[1;31m Sua média total é: %.1f", media);
    }

    return 0;

} 