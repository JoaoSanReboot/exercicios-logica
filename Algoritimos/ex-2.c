#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>


void bhaskara(double a, double b, double c) {

    //Para acentua��o brasileira
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    double delta = b*b - 4*a*c;

    
    if (delta < 0) {
        printf("N�o existem ra�zes nesta equa��o. \n");
    } else {
        
        double x1 = (-b + sqrt(delta)) / (2*a);
        double x2 = (-b - sqrt(delta)) / (2*a);

        printf("Ra�zes da equa��o s�o: \n");
        printf("\n X1 = %.4lf", x1);
        printf("\n X2 = %.4lf", x2);
    }
}

int main() {
   
    //Para acentua��o brasileira
    setlocale(LC_ALL, "Portuguese_Brazil");
   
    double a, b, c;

    printf("Informe os coeficientes: \n");
    printf("\n Coeficiente A:");
        scanf("%lf", &a);

    printf("\n Coeficiente B:");
        scanf("%lf", &b);

    printf("\n Coeficiente C:");
        scanf("%lf", &c);

    bhaskara(a, b, c);

    return 0;
}
