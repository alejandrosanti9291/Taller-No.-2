/*
*Nombre del programa: Secuencia de tabla de multiplicar.
*Autor: Alejandro Santibañez Sanchez
*Fecha: 23/02/2017
*Resumen: El usuario ingresa un numero el cual delimita la tabla de multiplicar que se debe realizar y mostrar en pantalla.
*/
#include <stdio.h>

int main(){

int lNumero;
    printf("Ingrese un numero \n");
    scanf("%d", &lNumero);
    printf("%d x 1=%d \n", lNumero, lNumero*1);
    printf("%d x 2=%d \n", lNumero, lNumero*2);
    printf("%d x 3=%d \n", lNumero, lNumero*3);
    printf("%d x 4=%d \n", lNumero, lNumero*4);
    printf("%d x 5=%d \n", lNumero, lNumero*5);
    printf("%d x 6=%d \n", lNumero, lNumero*6);
    printf("%d x 7=%d \n", lNumero, lNumero*7);
    printf("%d x 8=%d \n", lNumero, lNumero*8);
    printf("%d x 9=%d \n", lNumero, lNumero*9);
    printf("%d x 10=%d \n", lNumero, lNumero*10);

    return 0;
}
