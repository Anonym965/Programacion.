#include <stdio.h>

int main() {
    /* Jahaziel Jimenez
    Equipo Zener
    21 abr 21
    programa 5 calcular el volumen de un trapecio y muestra resultado.
    */

   float basemayor, basemenor, altura, cuarto;
   printf ("\n\n programa 5"); 
   printf ("\n\n Calcula el volumen de un trapecio");
   printf ("\n\n dame el primer valor real");
   scanf ("%f",&basemayor); //permite capturar un valor real y lo guarda en variable primer
   printf ("\n\n dame el segundo valor real");
   scanf ("%f",&basemenor); //permite capturar un valor real y lo guarda en variable primer
   printf ("\n\n dame el tercer valor real");
   scanf ("%f",&altura); //permite capturar un valor real y lo guarda en variable primer
   cuarto = (basemayor + basemenor)/2*altura;
   printf ("\n el volumen es %f", cuarto);
   return 0;

}