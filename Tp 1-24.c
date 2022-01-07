#include<stdio.h>
void main(){
    float peso;
    int cont, pesoInf=0, pesoSup=0, cantEmpleados;

        do{
            printf("ingresar un empleado?? 1-Si / 2-No\n");
            scanf("%i", &cont);
        }while(cont <1 || cont > 2);

    while(cont==1){
        cantEmpleados++;
        do{
            printf("Ingrese el peso del empleado en kg: ");
            scanf("%f", &peso);
        }while(peso<=0);

        if (peso<=80){
            pesoInf= pesoInf+1;
        }
        else{
            pesoSup= pesoSup+1;
        }

        do{
            printf("Desea ingresar un nuevo empleado? 1-Si / 2-No\t");
            scanf("%i", &cont);
        }while(cont <1 || cont > 2);
    }
    printf("La cantidad de empleados es de: %i\n", cantEmpleados);
    printf("%i empleados pesan menos de 80kg y %i pesan mas de 80kg", pesoInf, pesoSup);
}
