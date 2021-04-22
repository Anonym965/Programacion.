#include <stdio.h>

int main() 
{
    /* Jahaziel Jimenez
    Equipo Zener
    21 abr 21
    programa 4 pide dos valores reales, calcula multiplica, divide y muestra ell resultado.
    */

   float primer, segundo, multiplica, division;
   printf ("\n\n programa 4"); 
   printf ("\n\n saca el promedio de valores reales");
   printf ("\n\n dame el primer valor real");
   scanf ("%f",&primer); //permite capturar un valor real y lo guarda en variable primer
   printf ("\n\n dame el segundo valor real");
   scanf ("%f",&segundo); //permite capturar un valor real y lo guarda en variable primer
   multiplica = primer * segundo;
   division = primer / segundo;
   printf ("\n el producto es %f", multiplica);
   printf ("\n el cociente es %f", division);
   return 0;

}