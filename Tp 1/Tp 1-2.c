#include<stdio.h>

void main(){
    int num, rta;
    printf("Insertar numero entero mayor a 0: ");
    scanf("%i", &num);
    if(num>0){
        rta = num*num;
        printf("El cuadrado de %i es: %i", num, rta);
    }
    else{
        printf("Error, el numero debe ser mayor a 0");
    }
}
