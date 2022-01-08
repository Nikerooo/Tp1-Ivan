#include<stdio.h>

int siguiente(int a){

    int c;
    do{
        c = 1;
        a++;
         for(int j=2; j<a; j++){
            if(a%j == 0){
                c = 0;
                break;
            }

        }

    }while(c==0);
    return a;
}


void main(){
    int num, primo;

    printf("Introducior un numero: ");
    scanf("%i", &num);

    primo = siguiente(num);

    printf("El siguiente numero primo es: %i", primo);
}
