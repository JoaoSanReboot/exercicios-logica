#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void){
    
    //Para acentua��o brasileira
    setlocale(LC_ALL, "Portuguese_Brazil");

    float dist1, dist2, dist3;

    printf("Informe as tr�s dist�ncias do dardo: \n");
        printf("Dist�ncia A: \n");
             scanf("%f", &dist1);

        printf("Dist�ncia B: \n");
             scanf("%f", &dist2);

        printf("Dist�ncia C: \n");
             scanf("%f", &dist3);


        float maiordist = dist1;

        if(dist2 > maiordist){

            maiordist = dist2;
        }
        if(dist3 > maiordist){
            
            maiordist = dist3;
        }

        printf("Maior dist�ncia do dardo foi: %.2f", maiordist);
}
