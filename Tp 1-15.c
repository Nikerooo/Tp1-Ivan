#include<stdio.h>
void main(){
    int acum = 0;
    for(int i=0; i<= 100; i+=3){
        acum = acum + i;
        printf("%i\n", i);
    }
    printf("El total de la suma es: %i", acum);
}
