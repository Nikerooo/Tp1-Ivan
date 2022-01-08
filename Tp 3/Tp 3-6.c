#include<stdio.h>
char menu(){
    char  a
    printf("Seleccione una letra: ");
    scanf("%c", &a);
    return a;
}

void main(){
    char caracter;

    caracter = menu(caracter);

    printf("El caracter seleccionado es: %c", caracter);
}
