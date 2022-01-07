#include<stdio.h>
void main(){
    int num;
    printf("Ingrese un numero entero positivo: ");
    scanf("%i", &num);
    for(int i=1; i<=num;i++) {
        printf("%i\n", i);
        }
}
