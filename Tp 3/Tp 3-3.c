#include<stdio.h>

int Determinar(float a){
        int c;
        if (a<0){
            c = 1;
        }
        else if (a>0){
            c = 2;
        }
        else{
            c = 3;
        }
        return c;
}

void mostrar(float a){
    int c = Determinar(a);
    switch(c){
        case 1: printf ("El nro %.1f es: Negativo", a);
                break;
        case 2: printf ("El nro %.1f es: Positivo", a);
                break;
        case 3: printf ("El nro es 0");
                break;
    }
}

float pedirDatos(){
    float a;
    printf("Introduzca un numero: ");
    scanf("%f", &a);
    return a;
}

void main(){
    float num;

    num = pedirDatos();

    mostrar(num);
}

















