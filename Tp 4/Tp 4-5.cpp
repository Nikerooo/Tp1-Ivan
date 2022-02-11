#include<stdio.h>

int analizar(int a [10]){
    int b=0;

    for (int i = 0; i < 10; i++){

        if( a[i] > b ){
            b = a[i];
            printf("%i\n", b);
        }
    }
    return b;
}

int main(){

    int cofre [10] = {2 , 6, 4, 5, 8, 3, 10, 7, 9, -1}; //Array a revisar
    int carMasAlto;

    carMasAlto = analizar(cofre);
    printf("El caracter mas alto es: %i", carMasAlto);

    return 0;
}
