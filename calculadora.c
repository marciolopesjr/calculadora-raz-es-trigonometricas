#include <stdio.h>

float HIPOTENUSA, CATETO_O, CATETO_A;
float SENO, COSSENO, TANGENTE;

int main() {

        printf("\n Calculadora de consseno, seno e tangente.(No momento)\n");


        printf("\n Digite o valor do cateto oposto: ");
        scanf("%f", &CATETO_O);

        printf("\n Digite o valor da hipotenusa: ");
        scanf("%f", &HIPOTENUSA);

        printf("\n Digite o valor do cateto adjacente: ");
        scanf("%f", &CATETO_A);

        SENO = CATETO_O/HIPOTENUSA;
        COSSENO = CATETO_A/HIPOTENUSA;
        TANGENTE = CATETO_O/CATETO_A;

        printf("\n Cateto oposto = %f, hipotenusa =  %f, cateto adjacente =  %f ", CATETO_O, HIPOTENUSA, CATETO_A);

        printf("\n O valor de seno é: %f", SENO);
        printf("\n O valor de cosseno é: %f", COSSENO);
        printf("\n O valor de tangente é %f", TANGENTE);
}
