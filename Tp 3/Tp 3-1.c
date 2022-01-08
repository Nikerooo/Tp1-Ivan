#include<stdio.h>

float pedirDatos(){
    float a;
    printf("Ingrese un numero: ");
    scanf("%f", &a);
    return a;
}

float realizarSuma(float a, float b){
    return (a + b);
}

float saberMaximos(float a, float b){
    float c;
    if(a>=b){
        c = a;
    }
    else{
        c = b;
    }
    return c;
}

float saberMinimos(float a, float b){
    float c;
    if(a<=b){
        c = a;
    }
    else{
        c = b;
    }
    return c;
}


float sacarPromedio(float a, float b){
    return a / b;
}

void main(){
    float num, cantNums=0;
    float maximo=0, minimo=9999999999, promedio=0, suma=0;

    num = pedirDatos();
    while(num != 0){

        suma = realizarSuma(suma, num);
        maximo = saberMaximos (maximo, num);
        minimo = saberMinimos (minimo, num);
        cantNums++;
        num = pedirDatos();
    }
    promedio = sacarPromedio(suma, cantNums);
    printf("Suma= %.2f\nMaximo= %.2f\nMinimo= %.2f\nPromedio= %.2f\n", suma, maximo, minimo, promedio);
}





























