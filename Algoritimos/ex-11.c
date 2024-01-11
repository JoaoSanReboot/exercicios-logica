#include <stdio.h>
#include <locale.h>

void calcularAumento(float salario, float *novoSalario, float *aumento, float *porcentagem){

    // Para acentua��o brasileira
    setlocale(LC_ALL, "Portuguese_Brazil");

    //If's para ler o sal�rio e fazer o aumento com a porcentagem
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

    //Calc�lo de aumento de salario usando a porcentagem
    *aumento = salario * (*porcentagem / 100);
    *novoSalario = salario + *aumento;
}

int main() {

    //Declara��o de vari�veis
    float salario, novoSalario, aumento, porcentagem;
    
    // Para acentua��o brasileira
    setlocale(LC_ALL, "Portuguese_Brazil");

    //L� o sal�rio do funcion�rio
    printf("Digite o sal�rio do funcion�rio: \n");
        scanf("%f", &salario);

    //Caso o usuario n�o informe corretamente
    if (salario <= 0) {

        printf("\n\033[0;31mInforme um sal�rio correto.\n");
    }

    //Puxa a fun��o para calc�lar a porcentagem
    calcularAumento(salario, &novoSalario, &aumento, &porcentagem);

    //Impri os dados dos calc�los
    printf("\nNovo sal�rio: R$%.2f\n", novoSalario);
    printf("Aumento de sal�rio: R$%.2f\n", aumento);
    printf("Porcentagem: %.0f%%\n", porcentagem);

}
