#include<stdio.h>
void main(){
int num;
printf("Ingrese un numero entero: ");
scanf("%i", &num);

if(num%2==0){
    printf("El numero es par");
}
else{
    printf("El numero es impar");
}
}
