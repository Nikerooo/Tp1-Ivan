#include<stdio.h>

int intercambio(int a, int b){

    b = a;
    return a;
}

void main(){
    int num1, num2, paso=0;
    printf ("Ingrese un numero: ");
    scanf ("%i", &num1);

    printf("ingrese el segundo numero: ");
    scanf("%i", &num2);

    paso = intercambio(num1, paso);
    num2 = intercambio(num2, num1);
    num1 = intercambio(paso, num2);

    printf("El numero 2 paso al numero 1: %i\n", num1);
    printf("El numero 1 paso al numero 2: %i\n", num2);
}
