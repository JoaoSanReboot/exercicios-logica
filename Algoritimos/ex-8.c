#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void){
    
    //Para acentua��o brasileira
    setlocale(LC_ALL, "Portuguese_Brazil");

    char escolha;
    float celsius, fahrenheit;

    printf("Qual escala de temperatura voc� vai usar (C/F)? \n");
        scanf("%c", &escolha);

    if(escolha == 'f' || escolha == 'F'){

        printf("Digite a temperatura em Fahrenheit: \n");
            scanf("%f", &fahrenheit);
                celsius = 5.0 / 9.0 * (fahrenheit - 32.0);
            printf("Temperatura equivalente em Celsius: %.2f", celsius);
    }
    if(escolha == 'c' || escolha == 'C'){

        printf("Digite a temperatura em Celsius: \n");
            scanf("%f", &celsius);
                fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
            printf("Temperatura equivalente em Fahrenheit: %.2f", fahrenheit);
    }    
}