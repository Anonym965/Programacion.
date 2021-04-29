#include <stdio.h>

int main() {
    /* Jahaziel Jimenez Reyes
    Equipo Zener
    28 abr 21
    programa 8 calcula la tasa de rentabilidad inicial que obtendrias al comprar una empresa o negocio.
    */

   float Beneficiosanualesnetos, Precio, Rentabilidad;
   printf ("\n\n programa 8"); 
   printf ("\n\n Calcula la tasa de rentabilidad inicial.");
   printf ("\n\n ¿Cuales son los beneficios anuales netos de la empresa? ");
   scanf ("%f",&Beneficiosanualesnetos); //permite capturar un valor real y lo guarda en variable primer
   printf ("\n\n ¿Cual es el precio de venta?");
   scanf ("%f",&Precio); //permite capturar un valor real y lo guarda en variable primer
   Rentabilidad = (Beneficiosanualesnetos/Precio);
   printf ("\n La tasa de rentabilidad que obtendras sera de %f", Rentabilidad);
   return 0;

}