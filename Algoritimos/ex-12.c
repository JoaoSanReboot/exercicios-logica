#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void){
    
    //Para acentuação brasileira
    setlocale(LC_ALL, "Portuguese_Brazil");

    //Declaração de variáveis
    int horaInicio, horaFinal, horasJogadas;

    //Lê as informações dada pelo usuário
    printf("Informe a hora de entrada e saída do jogo:\n");
    printf("Hora Iniciada: ");
        scanf("%d", &horaInicio);
    printf("\nHora Finalizada: ");
        scanf("%d", &horaFinal);

    //Calcúlo de hora jogada
        horasJogadas = 24 +(horaFinal - horaInicio);

    //Imprimi a quantidade de horas jogadas
    printf("\nO jogo durou: %d horas", horasJogadas);

}