#include<stdio.h>

int analizar (char a [5], char b){

    for (int i=4; i > -1; i--){

        if (a[i] < b){
            printf("%i\n", i+1);
            return i+1 ;
        }
    }
}

int insertar (char a [5], char b){

    int c = analizar(a,b);
    for(int j = 4; j >= c; j-- ){
        a[j+1] = a[j];
    }

    a[c] = b;
}

void mostrar(char a[5]){
    for(int n=0; n<5; n++){
        printf("%c\t", a[n]);
    }
}

int main(){

    char caracter[5] = {'a', 'd', 'h', 'm','j'};
    char caracterUsuario;

    mostrar(caracter);
    scanf("%c", &caracterUsuario);
    insertar(caracter, caracterUsuario);

    mostrar(caracter);

    return 0;
}
