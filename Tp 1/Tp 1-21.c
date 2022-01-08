#include<stdio.h>
void main(){
    float num, sumPos=0, prodNeg=1;

    for(int i=0; i<10; i++){
        do{
            printf("Ingrese un numero distinto a 0: ");
            scanf("%f", &num);
        }while(num==0);


        if (num > 0){
            sumPos = sumPos + num;
        }
        else{
            prodNeg = prodNeg * num;
        }
    }
    printf("La suma de todos los positivos es, %.2f y el productos de los negativos es %.2f", sumPos, prodNeg);
}
