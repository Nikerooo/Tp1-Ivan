#include<stdio.h>
void main(){
float base, altura, superficie;
printf("Ingrese la base el triangulo: ");
scanf("%f", &base);
printf("Ingrese la altura del triangulo");
scanf("%f", &altura);
superficie = (base*altura)/2;
printf("La superficie del triangulo es: %.f", superficie);
}
