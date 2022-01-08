#include<stdio.h>

void main(){
    int num, esPrimo = 1;
    for(int i=2; i<=100; i++){
            esPrimo = 1;
        for(int j=2; j<i; j++){
            if(i%j == 0){
                esPrimo = 0;
            }
        }
        if (esPrimo == 1){
            printf("%i\n", i);
        }
    }
}
