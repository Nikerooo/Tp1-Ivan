#include<stdio.h>
void main(){
    float base, alt, hip;

    do{
        printf("Ingrese la base el triangulo: ");
        scanf("%f", &base);
    }while( base<0);

    do{
        printf("Ingrese la base el triangulo: ");
        scanf("%f", &alt);
    }while( alt<0);

    do{
        printf("Ingrese la base el triangulo: ");
        scanf("%f", &hip);
    }while( hip<0);

    if(base+alt > hip){

        printf("Es un triangulo\n");

        if (hip==alt && alt==base){
            printf("El triangulo es Equilatero");
        }
        else if( hip == alt && alt != base || hip != alt && alt == base){
            printf("El triangulo es Isosceles");
        }
        else {
            printf("El triangulo es Escaleno");
        }
    }
    else{
        printf("No es un triangulo");
    }
}
