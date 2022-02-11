#include<stdio.h>

int Suma (int a[100]){
    int c = 0;

    for(int j = 0 ; j <100; j++){
        c = c + a[j];
    }

    return c;
}

void main(){
    int varSuma [100];
    int rtaSuma;

    for(int i=0; i<100; i++){
        printf("Ingrese un numero: ");
        scanf("%i", &varSuma);           //Cambiar esta parte por 100 unos para probar...
    }

    rtaSuma = Suma(varSuma);
    printf("El resultado total de la suma es de: %i", rtaSuma);
}
