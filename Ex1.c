#include <stdio.h>
int main(){
    /* Jimenez Reyes Jahaziel
    Equipo zener
    12 mayo 2021*/
    int primer, segundo, multiplica, division;
    printf("\n\n Programa ex1");
    printf("\n\n Saca el promedio de valores reales");
    printf("\n\n dame el primer valor real ");
    scanf("%i" ,&primer);
    printf("dame el segundo valor real");
    scanf("%i" ,&segundo);
    multiplica = (primer * segundo);
    division = (primer / segundo);
    printf("\n\n Jimenez REYES JAHAZIEL, el prodcuto e %i" ,multiplica);
    printf("\n\n JIMENEZ REYES JAHAZIEL, el cociente es %i" , division);
    return 0;
}