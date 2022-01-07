#include<stdio.h>
void main(){
float num;
printf("Introducir un numero: ");
scanf("%f", &num);
if(num>0){
    printf("El numero introducido es positivo");
    }
else if(num<0){
    printf("El valor introducido es negativo");
    }
else{
    printf("El valor introducido es 0");
}
}
