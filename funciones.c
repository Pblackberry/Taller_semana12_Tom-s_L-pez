#include <stdio.h>
#include <math.h>
#include "funciones.h"

float calcularDistancias(float x1, float y1, float z1, float x2, float y2, float z2){
    return sqrt(pow(x1-x2,2)+pow(y1-y2,2)+pow(z1-z2,2));
}

float calcularPerimetro(float puntos[4][3], float *a, float *b, float *c, float *d, float *e, float *f){
    *a = calcularDistancias(puntos[0][0], puntos[0][1], puntos[0][2], puntos[1][0], puntos[1][1], puntos[1][2]);
    *b = calcularDistancias(puntos[0][0], puntos[0][1], puntos[0][2], puntos[2][0], puntos[2][1], puntos[2][2]);
    *c = calcularDistancias(puntos[1][0], puntos[1][1], puntos[1][2], puntos[2][0], puntos[2][1], puntos[2][2]);
    *d = calcularDistancias(puntos[0][0], puntos[0][1], puntos[0][2], puntos[3][0], puntos[3][1], puntos[3][2]);
    *e = calcularDistancias(puntos[1][0], puntos[1][1], puntos[1][2], puntos[3][0], puntos[3][1], puntos[3][2]);
    *f = calcularDistancias(puntos[2][0], puntos[2][1], puntos[2][2], puntos[3][0], puntos[3][1], puntos[3][2]);
    float per=*a+*b+*c+*d+*e+*f;
    return per;
}


float calcularArea(float a, float b, float c, float d, float e, float f, float *ab){
    float s1 = (a+d+e)/2;
    float a1 = sqrt(s1*(s1-a)*(s1-d)*(s1-e));
    float s2 = (b+d+f)/2;
    float a2 = sqrt(s2*(s2-b)*(s2-d)*(s2-f));
    float s3 = (c+e+f)/2;
    float a3 = sqrt(s3*(s3-c)*(s3-e)*(s3-f));
    float s4 = (a+b+c)/2;
    *ab = sqrt(s4*(s4-a)*(s4-b)*(s4-c));
    return a1+a2+a3+*ab;
}

float calcularVolumen(float puntos[4][3], float ab){
float bx= (puntos[0][0]+puntos[1][0]+puntos[2][0])/3;
float by= (puntos[0][1]+puntos[1][1]+puntos[2][1])/3;
float bz= (puntos[0][2]+puntos[1][2]+puntos[2][2])/3;
float distancia=sqrt(pow(puntos[3][0]+bx,2)+pow(puntos[3][1]+by,2)+pow(puntos[3][2] +bz,2));
return (ab*distancia)/3;
}