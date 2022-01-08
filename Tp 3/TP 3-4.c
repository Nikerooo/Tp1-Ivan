#include<stdio.h>

int Potencia(int a, int b){
    for(int i=1; i<=b; i++){
        a = a*a;
        return a;
    }
}

void main(){
    int x, y;
    printf("Introduzca un numero: ");
    scanf("%i", &x);

    printf("Introduzca la potencia de %i: ", x);
    scanf("%i", &y);

    printf("El resultado de %i elevado a %i es= %i", x, y, Potencia(x, y));
}
