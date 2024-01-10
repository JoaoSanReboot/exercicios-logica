#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void){
    
    //Para acentuação brasileira
    setlocale(LC_ALL, "Portuguese_Brazil");

    //Declaração de variáveis
    int num1, num2, num3;

    //Informar valor para as variáveis
    printf("Informe três valores para ser encontrado o menor valor: \n");
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

    // Exibe o menor número
    printf("\n O menor número é: %d \n", menornum);
}