#include <stdio.h>

int main() {
    /* Jahaziel Jimenez
    Equipo Zener
    21 abr 21
    programa 3 de dos valores reales calcule promedio y muestra resultado.
    */

   float primer, segundo, tercero;
   printf ("\n\n programa 3"); 
   printf ("\n\n saca el promedio de valores reales");
   printf ("\n\n dame el primer valor real");
   scanf ("%f",&primer); //permite capturar un valor real y lo guarda en variable primer
   printf ("\n\n dame el segundo valor real");
   scanf ("%f",&segundo); //permite capturar un valor real y lo guarda en variable primer
   tercero = (primer + segundo)/2;
   printf ("\n el promedio es %f", tercero);
   return 0;

}