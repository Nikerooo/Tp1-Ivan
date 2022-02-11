#include<stdio.h>

void mostrar(){
    printf("el array es capicua");
}

void mostrar2(){
    printf("el array no es capicua");
}

int analizar(int a[10]){
    int c = 0;
        for (int i=0; i < 5; i++){
        int b = (9-i);
            if(a[i] == a[b]){
            c++;
            }
        }
    if (c==5){
        mostrar();
    }
    else{
        mostrar2();
    }
    return 0;
}


    int capicua[10]={1,5,8,45,32,32,45,8,5,1};

int main(){
    analizar(capicua);
    return 0;
}
