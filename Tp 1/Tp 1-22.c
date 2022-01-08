#include<stdio.h>
void main() {
    float num1, num2, pase1, pase2;
    printf("Ingrese un numero: ");
    scanf("%f", &num1);
    printf("\nIngrese otro numero: ");
    scanf("%f", &num2);

    pase1 = num1;
    pase2 = num2;
    num1 = pase2;
    num2 = pase1;
    printf("num2= %.2f, num1= %.2f", num2, num1);
}
