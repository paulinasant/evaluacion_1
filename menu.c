/* printMenu
    Author: santillan Osorio Ada Paulina
    Date: <10/03/2023>
    */

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int printMenu(){

    int option;
    system("clear");
    fflush( stdin );
    printf("Bienvenido al men%c seleccione una opci%cn \n\n",163,162);
    printf("\t1)Suma\n"); printf("\t2)Resta\n"); printf("\t3)Multiplicacion\n"); printf("\t4)Division\n");
    scanf("%d",&option);
    if(option)
        return option;
    else
        return 0;
}

int main(){
    char inutil;
    int flag = 0;
    while(flag!=4){
        flag = printMenu();
        switch (flag){
            case 1:
                printf("\n1 Suma");
                    int num1,num2,sumar;
                    printf( "\n   Introduzca primer numero: " );
                    scanf( "%d", &num1 );
                    printf( "\n   Introduzca segundo numero: " );
                    scanf( "%d", &num2 );
                    sumar = num1 + num2;
                    printf( "\n   La suma es: %d", sumar);
                    if (sumar % 2 == 0) {
                        printf("Es par");
                    } else { 
                        printf("Es impar"); }
                break;
            
            case 2:
                printf("\n2 Resta");
                int n1,n2,restar;
                    printf( "\n   Introduzca primer numero: " );
                    scanf( "%d", &n1 );
                    printf( "\n   Introduzca segundo numero: " );
                    scanf( "%d", &n2 );
                    restar = n1 - n2;
                    printf( "\n   La Resta es: %d", restar);
                    if (restar %5==0) {
                        printf("Es multiplo de 5");
                    } else { 
                        printf("Es impar"); }
                break;
            
            case 3:
                printf("\n3 Multiplicacion");
                int mult, enum1,enum2;
                    printf( "\n   Introduzca primer numero: " );
                    scanf( "%d", &enum1);
                    printf( "\n   Introduzca segundo numero: " );
                    scanf( "%d", &enum2 );
                    mult = enum1 * enum2;
                    printf( "\n   La Multiplicacion es: %d", mult);
                    if (mult >= 10 ) {
                        printf("Mayor a 10");
                    } else { 
                        printf("Menor a 10"); }
                break;
                
            case 4:
                printf("\n4 Division");
                float numero1,numero2,dividir;
                printf( "\n   Introduzca primer numero: " );
                scanf( "%f", &numero1 );
                printf( "\n   Introduzca segundo numero: " );
                scanf( "%f", &numero2 );
                dividir = numero1 / numero2;
                printf( "\n   La Division es: %f", dividir);
                break;
            
            case 0:
                printf("\nNo valido");
                break;
            default:
                printf("\nNo valido");
                break;
        }
        printf("\nOprima enter tecla cualquiera para continuar ");
        fflush( stdin );
        scanf("%c",&inutil);
    }
    printf("excelente");
}
