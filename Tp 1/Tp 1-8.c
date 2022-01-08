#include<stdio.h>

void main(){
    float grCelcius, grFahrenheit;
    printf("Ingrese la temperatura en celcius: ");
    scanf("%f", &grCelcius);
    grFahrenheit = grCelcius + 112;
    printf("%.2f grados Celcius equivalen a %.2f grados Fahrenheit.", grCelcius, grFahrenheit);
}
