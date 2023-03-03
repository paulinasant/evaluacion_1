/**************************
@date 02-03-2023
@author Santillan Osororio Ada Paulina
@version 1
3)Imprimir la serie de números primos del 1 al 50
***************************/
#include <conio.h>
#include <stdio.h>

int main(){
    
    int contador, i, primo;
    printf("\nla serie de números primos del 1 al 50 es: \n");
    for ( i = 1 ; i <= 50 ; i++ )
    {
    primo = 1;
    contador = 2;
    while ( contador <= i / 2 && primo )
    {
    if ( i % contador == 0 )
    primo = 0;
    contador++;
    }
    if ( primo )
    printf( "%d ", i );
    }
    return 0;
}
