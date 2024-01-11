#include <stdio.h>
#include <locale.h>

void calcularAumento(float salario, float *novoSalario, float *aumento, float *porcentagem){

    // Para acentuação brasileira
    setlocale(LC_ALL, "Portuguese_Brazil");

    //If's para ler o salário e fazer o aumento com a porcentagem
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

    //Calcúlo de aumento de salario usando a porcentagem
    *aumento = salario * (*porcentagem / 100);
    *novoSalario = salario + *aumento;
}

int main() {

    //Declaração de variáveis
    float salario, novoSalario, aumento, porcentagem;
    
    // Para acentuação brasileira
    setlocale(LC_ALL, "Portuguese_Brazil");

    //Lê o salário do funcionário
    printf("Digite o salário do funcionário: \n");
        scanf("%f", &salario);

    //Caso o usuario não informe corretamente
    if (salario <= 0) {

        printf("\n\033[0;31mInforme um salário correto.\n");
    }

    //Puxa a função para calcúlar a porcentagem
    calcularAumento(salario, &novoSalario, &aumento, &porcentagem);

    //Impri os dados dos calcúlos
    printf("\nNovo salário: R$%.2f\n", novoSalario);
    printf("Aumento de salário: R$%.2f\n", aumento);
    printf("Porcentagem: %.0f%%\n", porcentagem);

}
