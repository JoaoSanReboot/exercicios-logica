#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void){
    
    //Para acentua��o brasileira
    setlocale(LC_ALL, "Portuguese_Brazil");

    //Declara��o de vari�veis
    int num1, num2, num3;

    //Informar valor para as vari�veis
    printf("Informe tr�s valores para ser encontrado o menor valor: \n");
        system("pause");

    printf("\n Primeiro valor:");
        scanf("%d", &num1);

    printf("\n Segundo valor:");
        scanf("%d", &num2);

    printf("\n Terceiro valor:");
        scanf("%d", &num3);  
        
    //Compara para encontrar no menor valor
    int menornum = num1;

    if (num2 < menornum) {
        menornum = num2;
    }

    if (num3 < menornum) {
        menornum = num3;
    }

    // Exibe o menor n�mero
    printf("\n O menor n�mero �: %d \n", menornum);
}