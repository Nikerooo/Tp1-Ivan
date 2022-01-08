#include<stdio.h>
void main(){
    char nombre[15];
    float cantHrsMes, valorHrs, total, totDesc, totNeto;
    int antiguedad;

    printf("Ingrese el nombre el empleado: ");
    scanf("%s", &nombre);

    do{
        printf("Ingrese el valor por hora: ");
        scanf("%f", &valorHrs);
    }while(valorHrs<0);

    do{
        printf("Ingrese la antiguedad del empleado: ");
        scanf("%i", &antiguedad);
    }while(antiguedad<=0);

    do{
        printf("Ingrese la cantidad de horas trabajas por mes: ");
        scanf("%f", &cantHrsMes);
    }while(cantHrsMes<0);

    total = (valorHrs * cantHrsMes) + (300*antiguedad);
    totNeto = total - (total*0.13);
    totDesc = total*0.13;

    printf("\nEl empleado %s, tiene una antiguedad de %i años\nEl ultimo mes trabajo %.2f y el valor por hora es de $ %.2f\n", nombre, antiguedad, cantHrsMes, valorHrs);
    printf("El empleado debe cobrar $ %.2f en bruto", total);
    printf("El total con los descuentos es de %.2f");
}
