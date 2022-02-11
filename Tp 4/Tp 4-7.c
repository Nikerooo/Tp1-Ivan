#include<stdio.h>

int invertir(int a[10]){
    int arrayB[10];
    for(int i=9; i>=0; i--){
        int c = 9-i;
        arrayB[c] = a[i];
        printf("%i\n", arrayB[c]);
    }
}

void main(){
    int arrayA[10] = {0,1,2,3,4,5,6,7,8,9};

    invertir(arrayA);
}
