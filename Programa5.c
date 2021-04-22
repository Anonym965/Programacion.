#include <stdio.h>

int main() {
    /* Jahaziel Jimenez
    Equipo Zener
    21 abr 21
    programa 5 calcular el area de un triangulo y muestra resultado.
    */

   float base, altura, tercero;
   printf ("\n\n programa 3"); 
   printf ("\n\n Calcula el area de un triangulo");
   printf ("\n\n dame el primer valor real");
   scanf ("%f",&base); //permite capturar un valor real y lo guarda en variable primer
   printf ("\n\n dame el segundo valor real");
   scanf ("%f",&altura); //permite capturar un valor real y lo guarda en variable primer
   tercero = (base * altura)/2;
   printf ("\n el area es %f", tercero);
   return 0;

}