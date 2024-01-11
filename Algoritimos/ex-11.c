#include <stdio.h>
#include <locale.h>

void calcularAumento(float salario, float *novoSalario, float *aumento, float *porcentagem){

    // Para acentua��o brasileira
    setlocale(LC_ALL, "Portuguese_Brazil");

    if (salario <= 1000.00 && salario > 0) {
        *porcentagem = 20;
    }
    if (salario > 1000.00 && salario <= 3000.00) {
        *porcentagem = 15;
    }
    if (salario > 3000.00 && salario <= 8000.00) {
        *porcentagem = 10;
    }
    if (salario > 8000.00) {
        *porcentagem = 5;
    }

    *aumento = salario * (*porcentagem / 100);
    *novoSalario = salario + *aumento;
}

int main() {
    float salario, novoSalario, aumento, porcentagem;
    
    // Para acentua��o brasileira
    setlocale(LC_ALL, "Portuguese_Brazil");

    printf("Digite o sal�rio do funcion�rio: \n");
    scanf("%f", &salario);

    if (salario <= 0) {
        printf("\n\033[0;31mInforme um sal�rio correto.\n");
        return 1;  // C�digo de erro
    }

    calcularAumento(salario, &novoSalario, &aumento, &porcentagem);

    printf("\nNovo sal�rio: R$%.2f\n", novoSalario);
    printf("Aumento de sal�rio: R$%.2f\n", aumento);
    printf("Porcentagem: %.0f%%\n", porcentagem);

    return 0;
}
