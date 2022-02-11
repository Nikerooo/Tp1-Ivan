#include<stdio.h>

int Potencia(int a, int b){
    int c = a;
    for(int i=1; i<b; i++){
        c = c * a;
        printf ("%i\n", c);
    }
    return c;
}

void main(){
    int x, y;
    printf("Introduzca un numero: ");
    scanf("%i", &x);

    printf("Introduzca la potencia de %i: ", x);
    scanf("%i", &y);

    printf("El resultado de %i elevado a %i es = %i", x, y, Potencia(x, y));
}
