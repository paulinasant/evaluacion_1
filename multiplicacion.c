/**************************
@date 02-03-2023
@author Santillan Osororio Ada Paulina
@version 1
1)Impresión de tabla de multiplicar del 1 al 10
***************************/
#include<stdio.h>

int main(){

    int Numero, i;

    printf("introduce que número quieres visualizar la tabla de multiplicacion: ");
    scanf("%d", &Numero);
    printf("\n La tabla de multiplicar de %d es:  ");
    for (i =1; i <= 10; i++){
    printf("\n %d * %d = %d", i ,Numero,  Numero * i);
    }
    return 0;
}

