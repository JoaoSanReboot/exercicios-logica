#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void){
    
    //Para acentua��o brasileira
    setlocale(LC_ALL, "Portuguese_Brazil");

    //Declara as vari�veis
    float dist1, dist2, dist3;

    //L� as dist�ncias informadas
    printf("Informe as tr�s dist�ncias do dardo: \n");
        printf("Dist�ncia A: \n");
             scanf("%f", &dist1);

        printf("Dist�ncia B: \n");
             scanf("%f", &dist2);

        printf("Dist�ncia C: \n");
             scanf("%f", &dist3);


        //Defini a maior dist�ncia
        float maiordist = dist1;

        //Faz a compara��o com outras dist�ncias
        if(dist2 > maiordist){

            maiordist = dist2;
        }
        if(dist3 > maiordist){
            
            maiordist = dist3;
        }

        //Imprimi a maior dist�ncia
        printf("Maior dist�ncia do dardo foi: %.2f", maiordist);
}
