#include<stdio.h>

int insercion(int a[10]){
    int auxiliar;
    for (int i=0; i<10; i++){
        if(a[i]< a[i+1]){
                auxiliar = a[i];
                a[i] = a[i+1];
                a[i+1] = auxiliar;
        }
    }
}

int seleccion(){

}

void main(){
    int arrayA[8]={6,5,3,1,8,7,2,4};
}
