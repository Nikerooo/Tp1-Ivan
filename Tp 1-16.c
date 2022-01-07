#include<stdio.h>
void main(){
    int acum = 1, acum2=1;
    for (int i = 3; i<=100; i+=3) {
        printf("3 * %i = %i\n", acum, i);
        acum++;
    }
    printf("**************\n");
    for(int b = 2; b<=100; b+=2) {
        printf("2 * %i = %i\n", acum2, b);
        acum2++;
    }
}
