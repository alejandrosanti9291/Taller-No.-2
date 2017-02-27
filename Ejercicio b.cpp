/*
Nombre del programa: Solucionar área de un triangulo.
Autor: Alejandro Santibañez Sanchez.
Fecha: 20/02/2017
Resumen: Esta algoritmo halla el area de un triangulo.
*/
#include <stdio.h>

int main(){

    float lBase, lAltura, lArea;

    printf("Ingrese la base del triangulo \n");
    scanf("%f", &lBase);
    printf("Ingrese la altura del triangulo \n");
    scanf("%f", &lAltura);
    lArea = (lBase * lAltura) / 2;
    printf("El area del triangulo es:= %f \n", lArea);

    return 0;
}
