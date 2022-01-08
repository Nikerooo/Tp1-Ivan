#include<stdio.h>
void main(){
    int numDia;
    int resp;
    do {
        do{
            printf("Introduzca un dia del 1-7: ");
            scanf("%i", &numDia);
        } while(numDia<1 || numDia>7);

        switch(numDia){
                case 1 : printf("Lunes\n");
                        printf("******************************\n");
                    break;
                case 2 : printf("Martes\n");
                        printf("******************************\n");
                    break;
                case 3 : printf("Miercoles\n");
                        printf("******************************\n");
                    break;
                case 4 : printf("Jueves\n");
                        printf("******************************\n");
                    break;
                case 5 : printf("Viernes\n");
                        printf("******************************\n");
                    break;
                case 6 : printf("Sabado\n");
                        printf("******************************\n");
                    break;
                case 7 : printf("Domingo\n");
                        printf("******************************\n");
                    break;
        }

        do{
            printf("Desea ingresar otro numero? 1.Si/2.No: ");
            scanf("%i", &resp);
        }while(resp!=1 && resp!=2);
    }while(resp==1);

}
