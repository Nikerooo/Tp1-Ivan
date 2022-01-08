#include <stdio.h>

void main(){
    int num1, num2, num3, num4, num5;
    float rta;
    printf("Ingrese un numero entero:");
    scanf("%i", &num1);
    printf("Ingrese otro numero entero:");
    scanf("%i", &num2);
    printf("Ingrese un tercer numero entero:");
    scanf("%i", &num3);
    printf("Ingrese un cuarto numero entero:");
    scanf("%i", &num4);
    printf("Ingrese un quinto numero entero:");
    scanf("%i", &num5);
    rta = (num1 + num2 + num3 + num4 + num5) / 5;
    printf("El promedio es: %f", rta);
}
