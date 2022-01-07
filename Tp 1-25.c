#include<stdio.h>
void main(){
    float montBoleta, tot1, tot2, tot3, tot;
    int numVend;

    do{
        printf("Ingrese el vendedor: ");
        scanf("%i", &numVend);
    }while(numVend<0 || numVend>3);

    while(numVend != 0){

        do{
            printf("Ingrese el monto de la boleta: ");
            scanf("%f", &montBoleta);
        }while(montBoleta<0);

        tot = tot + montBoleta;

        switch(numVend){
            case 1 : tot1 = tot1 + (montBoleta*0.05);
                    break;
            case 2: tot2 = tot2 + (montBoleta*0.05);
                    break;
            case 3: tot3 = tot3 + (montBoleta*0.05);
                    break;
        }

        do{
            printf("Ingrese el vendedor: ");
            scanf("%i", &numVend);
        }while(numVend<0 || numVend>3);

    }
    printf("El vendedor 1 gano un total de: %.2f\n", tot1);
    printf("El vendedor 2 gano un total de: %.2f\n", tot2);
    printf("El vendedor 3 gano un total de: %.2f\n", tot3);
    printf("El total de la caja es de: %.2f", tot);
}

