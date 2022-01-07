#include<stdio.h>
void main(){
    int CantNumImp=0;
    for(int i = 1 ; i<=100; i++){
        if (i%2 != 0){
            CantNumImp++;
            printf("%i\n", i);
        }
    }
    printf("La cantidad de numeros impares es %i", CantNumImp);
}
