#include <stdio.h>

int main() {
    /* Jahaziel Jimenez Reyes
    Equipo Zener
    28 abr 21
    programa 7 calcula tu masa corporal.
    */

   float Peso, Altura, Resultado;
   printf ("\n\n programa 7"); 
   printf ("\n\n Calcular mi peso corporal");
   printf ("\n\n ¿Cual es tu peso? ");
   scanf ("%f",&Peso); //permite capturar un valor real y lo guarda en variable primer
   printf ("\n\n ¿Cual es tu altura? ");
   scanf ("%f",&Altura); //permite capturar un valor real y lo guarda en variable primer
   Resultado = Peso/(Altura*Altura);
   printf (" \n Tu masa corporal es %f ", Resultado);
   printf ("  Peso inferior al normal: Menos de 18.5 ");
   printf ("  Normal: 18.5-24.9 ");
   printf ("  Peso superior al normal: 25.0-29.9 ");
   printf ("  Obesidad: mas de 30.0 ");
   printf ("  ¡COME BIEN Y HAZ EJERCICIO! ");
   return 0;

}