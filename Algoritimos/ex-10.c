#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    
    //Para acentua��o brasileira
    setlocale(LC_ALL, "Portuguese_Brazil");

    //Declara��o de vari�veis
    int num1, num2, numFinal;

    printf("Digite dois n�meros inteiros:\n");

    printf("N�mero 1: \n");
        scanf("%d", &num1);

    printf("N�mero 2: \n");
        scanf("%d", &num2);

    numFinal = num1 / num2;

    if (num1 % num2 == 0 || num2 % num1 == 0) {
        printf("%d � m�ltiplo de %d\n", num1, num2);
    } else {
        printf("%d n�o � m�ltiplo de %d\n", num1, num2);
    }

}
