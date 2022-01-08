#include<stdio.h>
void main(){
    float cent, pies, pulgadas;
    printf("Ingrese los centimetros: ");
    scanf("%f", &cent);
    pies = cent/2.54;
    pulgadas = pies/12;
    printf("%.1f equivalen a, %.f pies y %.1f pulgadas", cent, pies, pulgadas);
}
