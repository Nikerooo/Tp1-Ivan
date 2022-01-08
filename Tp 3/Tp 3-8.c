#include<stdio.h>

float Salario(float a, float b){
    float c;

    c = a * b;

    if(b>=40){
        c = c * 1.5;
    }
    return c;
}

void main(){
    float hrsSemanales, precioHrsSem, total;

     printf("Ingrese el precio por hora semanal: ");
     scanf("%f", &precioHrsSem);

     printf("Ingrese las horas trabajadas semanalmente: ");
     scanf("%f", &hrsSemanales);

     total = Salario(precioHrsSem, hrsSemanales);

     printf("El total a pagar es de: %.2f", total);
}
