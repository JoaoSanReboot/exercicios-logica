#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void){
    
    //Para acentua��o brasileira
    setlocale(LC_ALL, "Portuguese_Brazil");

    //Declara��o de vari�veis
    int horaInicio, horaFinal, horasJogadas;

    //L� as informa��es dada pelo usu�rio
    printf("Informe a hora de entrada e sa�da do jogo:\n");
    printf("Hora Iniciada: ");
        scanf("%d", &horaInicio);
    printf("\nHora Finalizada: ");
        scanf("%d", &horaFinal);

    //Calc�lo de hora jogada
        horasJogadas = 24 +(horaFinal - horaInicio);

    //Imprimi a quantidade de horas jogadas
    printf("\nO jogo durou: %d horas", horasJogadas);

    return 0;
}