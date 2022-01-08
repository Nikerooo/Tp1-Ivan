#include<stdio.h>

float pedirDatos(){
    float a;
    printf("Ingrese un numero: ");
    scanf("%f", &a);
    return a;
}

float Suma(float a, float b){
    float suma = a + b;
    return suma;
}

float Resta(float a, float b){
    float resta = a - b;
    return resta;
}

float Multiplicacion(float a, float b){
    float multi = a * b;
    return multi;
}

float Division (float a, float b){
    if(b!=0){
        float division = a / b;
        return division;
    }
    else{
     printf("Error");
    }
}

void main(){
    float num1, num2;
    printf("1. ");
    num1 = pedirDatos();
    printf("2. ");
    num2 = pedirDatos();

    float suma = Suma(num1, num2);
    printf("La suma de ambos numeros es de: %.2f\n", suma);

    float resta = Resta(num1, num2);
    printf("La resta de ambos numeros es de: %.2f\n", resta);

    float multi = Multiplicacion(num1, num2);
    printf("La multiplicacion de ambos numeros es de: %.2f\n", multi);

    float division = Division(num1, num2);
    printf("La division de ambos numeros es de: %.2f\n", division);
}






























