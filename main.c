#include <stdio.h>
#include "funciones.h"

int main(int argc, char *argv[])
{
    float puntos[4][3]={{0,0,0},{0,0,3},{3,0,0},{1,7,1}};
    float a, b, c, d, e, f, ab;
   
    float perimetro = calcularPerimetro(puntos,&a,&b,&c,&d,&e,&f);
    printf("El perimetro del triangulo es %f\n", perimetro);
    float area = calcularArea(a,b,c,d,e,f, &ab);
    printf("El area del triangulo es %f\n", area);
    float volumen= calcularVolumen(puntos, ab);
    printf("El volumen del triangulo es %f\n", volumen);

    return 0;
}

