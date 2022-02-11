#include<stdio.h>

int intercalar(int a[10], int b[10]){
    int c[20];
    int ad=0;int be=0; int i=0; //Contadores

    do{
        if(ad < 10 && be==10){
            c[i]= a[ad];
            ad++;
        }
        else if(ad==10 && be < 10){
            c[i]=b[be];
            be++;
        }
        else{
            if(a[ad] < b[be]){
            c[i]= a[ad];
            ad++;
            }

            else if(b[be] < a[ad]){
                c[i]= b[be];
                be++;
            }

            else{
                c[i]= a[ad];
                ad++;
                i++;
                c[i]= b[be];
                be++;
            }
        }
        i++;
        }while(ad<10 || be<10);
        for(int j=0; j<20;j++){
            printf("%i | ", c[j]);
        }
        return 0;
}

void main(){
    int arrayA [10]={1,2,4,8,9,12,15,16,17,20};
    int arrayB [10]={3,5,6,7,8,10,13,14,18,19};
    intercalar(arrayA, arrayB);
}

