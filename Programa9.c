#include <stdio.h>

int main() {
    /*Jimenez Reyes Jahaziel 
    Equipo zener
    28 abr 21
    Calcular el promedio de una materia*/
    float cali, cal2, cal3, prome;
    printf("\n\n Calcula el promedio de tu materia.");
    printf("\n\n Tu primer calificacion.");
    scanf("%F", &cali);
    printf("\n\n Tu segunda calificacion");
    scanf("%F" ,&cal2);
    printf("\n\n Tu tercera calificacion");
    scanf("%F" ,&cal3);
    prome = (cali+cal2+cal3)/3;
    printf("\n\n\n Tu calificcion final es de %F", prome);
    return 0;
    
}