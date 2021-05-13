#include <stdio.h>
int main(){
    /* Jimenez Reyes Jahaziel
    Equipo zener
    12 mayo 2021*/
    float fruta, peso, precio;
    printf("\n\n Programa ex3");
    printf("\n\n comprando fruta");
    printf("\n\n presio de cualquier fruta ");
    printf("\n\n ingrese la fruta que selecciono");
    scanf("%f" ,&fruta);
    printf("ingrese el peso de la fruta seleccionada");
    scanf("%f" ,&peso);
    precio = (fruta * peso);
    printf("\n\n Jimenez REYES JAHAZIEL, el proecio total es de %f" ,precio);
    return 0;
}