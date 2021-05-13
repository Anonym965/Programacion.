#include <stdio.h>
int main(){
    /* Jimenez Reyes Jahaziel
    Equipo zener
    12 mayo 2021*/
    float peso, altura, IMC;
    printf("\n\n Programa ex4");
    printf("\n\n Calcula el indice de masa corporal");
    printf("\n\n dame el peso ");
    scanf("%f" ,&peso);
    printf("dame la altura");
    scanf("%f" ,&altura);
    IMC = peso /(altura * altura);
    printf("\n\n Jimenez REYES JAHAZIEL, tu masa corporal es de %f" ,IMC);
    return 0;
}