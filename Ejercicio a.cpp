/*
Nombre del programa: Solucionar área de una circunferencia.
Autor: Alejandro Santibañez Sanchez.
Fecha: 20/02/2017
Resumen: Esta algoritmo halla el area de una circunferencia, su diametro y longitud.
*/
#include <stdio.h>

int main (){

    float lRadio, lArea, lDiametro, lLongitud;
    const float pi = 3.1416;

    printf ("Ingrese el valor del radio \n");
    scanf ("%f",&lRadio);
    lArea = (lRadio * lRadio) * pi;
    printf ("El area de la circunferencia es:= %f \n", lArea);
    lDiametro = (2 * lRadio);
    printf ("El diametro de la circunferencia es:= %f \n", lDiametro);
    lLongitud =(2 * lRadio * pi);
    printf ("La longitud de la circunferencia es: = %f \n", lLongitud);

    return 0;

}
