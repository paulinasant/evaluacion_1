/**************************
@date 02-03-2023
@author Santillan Osororio Ada Paulina
@version 1
2)Imprimir un árbol de navidad 
***************************/
#include<stdio.h>

int main()
{
    int i,j,n;
    
    printf("\nIngresar la altura del arbolito :3: ");
    scanf("%d", &n);
    for(j=1;i<=n;i++){
    for(j=1;j<=n-i-1;j++)
    printf(" ");
    for(j=1;j<=2*i-1;j++)
    printf("*");
    printf("\n");
    }
    printf("|||");
    
    return 0;
}
