/*
Nombre del programa: Salario empleado
Autor: Alejandro Santibañez Sanchez
Fecha: 24/02/2017
Resumen: Programa para calcular el salario de un empleado.
*/
 #include <stdio.h>

 int main(){
    float lValorHora = 2500;
    float lHorasDiurnas, lHorasNocturnas, lHoraDominical, lHoraFestivo, lDiurna, lNocturna,lTNocturna, lDominical, lTDominical, lFestivo, lTFestivo, lTotalSalario;

    printf("Ingrese el numero de horas diurnas \n");
    scanf("%f",&lHorasDiurnas);
    printf("Ingrese el numero de horas nocturnas \n");
    scanf("%f",&lHorasNocturnas);
    printf("Ingrese el numero de horas dominicales \n");
    scanf("%f",&lHoraDominical);
    printf("Ingrese el numero de horas festivas \n");
    scanf("%f",&lHoraFestivo);
    lDiurna = (lValorHora*lHorasDiurnas);
    lNocturna = (lValorHora*0.35);
    lTNocturna = (lValorHora+lNocturna)* lHorasNocturnas;
    lDominical = (lValorHora*0.5);
    lTDominical = (lValorHora+lDominical)* lHoraDominical;
    lFestivo = (lValorHora*0.75);
    lTFestivo = (lValorHora+lFestivo)* lHoraFestivo;
    lTotalSalario = lDiurna + lTNocturna + lTDominical + lTFestivo;
    printf("El salario es=%f", lTotalSalario);


 return 0;
 }


