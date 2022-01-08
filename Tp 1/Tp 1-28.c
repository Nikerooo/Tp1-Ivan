#include<stdio.h>
void main(){
    int multi;
    for(int i=0; i<=10; i++){
        printf("**********************\n");
        for(int j=0; j<=10; j++) {
            multi = i * j;
            printf("%i * %i = %i\n", i, j, multi);
        }
    }
}
