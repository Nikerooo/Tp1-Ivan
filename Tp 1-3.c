#include <stdio.h>
void main(){
    float num, cantNpos=0, cantNneg=0;
for(int i=0; i<10 ; i++){
    printf("Ingrese un numero: ");
    scanf("%f", &num);
    if(num>0){
        cantNpos = cantNpos+1;
    }
    else if(num<0){
        cantNneg = cantNneg+1; /*aumenta el contador de los negativos en 1*/
    }
}
printf("La cantidad de numeros positivos es %.f y la cantidad de negativos es %.f", cantNpos, cantNneg);
}
