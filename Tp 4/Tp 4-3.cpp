#include<stdio.h>

int letIgual (char a [20], char b){

    for (int i=0; i < 20; i++){

        if(a[i] == b){
            return 1;
        }
    }
    return 0;
}

int main(){

    char simb[20] = {'n','I','c','o','L','A','s','1','8','6','4','*','/','5','+','j','f','E','d','e'};
    char simbUsur; //Simbolo del usuario
    int igualdad;

    scanf("%c", &simbUsur);
    igualdad = letIgual(simb, simbUsur);

    if (igualdad == 1){
        printf("La letra %c pertenece al array", simbUsur);
    }
    else{
        printf("La letra %c no pertenece al array", simbUsur);
    }
    return 0;
}
