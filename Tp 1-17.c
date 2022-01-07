#include<stdio.h>
void main(){
    int num, suma=0;
    printf("Ingrese un numero entero positivo; ");
    scanf("%i", &num);
    for (int i = 0; i<=num; i++) {
        suma = suma + i;
    }
    printf("El total de la suma es de : %i", suma);
}
