#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void){
    
    //Para acentuação brasileira
    setlocale(LC_ALL, "Portuguese_Brazil");

    float dist1, dist2, dist3;

    printf("Informe as três distâncias do dardo: \n");
        printf("Distância A: \n");
             scanf("%f", &dist1);

        printf("Distância B: \n");
             scanf("%f", &dist2);

        printf("Distância C: \n");
             scanf("%f", &dist3);


        float maiordist = dist1;

        if(dist2 > maiordist){

            maiordist = dist2;
        }
        if(dist3 > maiordist){
            
            maiordist = dist3;
        }

        printf("Maior distância do dardo foi: %.2f", maiordist);
}
