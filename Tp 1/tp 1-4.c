#include<stdio.h>
void main(){
    float radio, area, longitud;
printf("ingresar el radio de la circunferencia:");
scanf("%f", &radio);
longitud = radio*2;
area = radio*radio;
printf("La longitud de la circunferencia es %.f pi y el area es %.f pi", longitud, area);
}
