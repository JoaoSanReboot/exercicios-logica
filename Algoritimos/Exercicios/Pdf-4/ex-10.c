#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    
    //Para acentuação brasileira
    setlocale(LC_ALL, "Portuguese_Brazil");

    //Declaração de variáveis
    int num1, num2, numFinal;

    printf("Digite dois números inteiros:\n");

    printf("Número 1: \n");
        scanf("%d", &num1);

    printf("Número 2: \n");
        scanf("%d", &num2);

    numFinal = num1 / num2;

    if (num1 % num2 == 0 || num2 % num1 == 0) {
        printf("%d é múltiplo de %d\n", num1, num2);
    } else {
        printf("%d não é múltiplo de %d\n", num1, num2);
    }

}
