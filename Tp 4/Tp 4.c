#include<stdio.h>

void main(){
    char caracter[50];

    for (int i=0; i<50; i++)
        {

        printf("guardar un valor en la posicion %i: \n", i);
        scanf("%c", &caracter[i]);
        printf("%c\n", caracter[i]);

        if(caracter[i] == "*"){
            break;
        }
    }

}
