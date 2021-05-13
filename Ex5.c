#include <stdio.h>
int main(){
    /* Jimenez Reyes Jahaziel
    Equipo zener
    12 mayo 2021*/
    int personas, alimentos, porciones;
    printf("\n\n Programa ex5");
    printf("\n\n dame el numero de personas ");
    scanf("%f" ,&personas);
    printf("dame el numero de aliemntos disponibles");
    scanf("%f" ,&alimentos);
    porciones = (personas / alimentos );
    printf("\n\n Jimenez REYES JAHAZIEL, la porcion de alimentos es de %f por cada persona" ,porciones);
    return 0;
}