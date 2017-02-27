/*
Nombre del programa: Contador de dolares
Autor: Alejandro Santibañez Sanchez
Fecha: 24/02/2014
Resumen: Toma el precio del volar y lo multiplica por el total de dolares del usuario para arrojar el total de dolares que posee.
*/

#include <stdio.h>

int main(){
    float lPdolar,lDolares,lTotalDolares;

    printf("Ingrese el valor del dolar actual \n");
    scanf("%f",&lPdolar);
    printf("Ingrese el numero de dolares que posee \n");
    scanf("%f", &lDolares);
    lTotalDolares = (lPdolar * lDolares);
    printf("La cantidad de dinero en dolares que tiene es: = %f", lTotalDolares);

return 0;
}
