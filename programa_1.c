/**************************
@date <22-02-2023>
@author <Santillan Osororio Ada Paulina>
@version <1>

***************************/

#include <stdio.h>
#include <string.h>

int main()
{
    
    int Total = 100;
    int Puntaje = 0;
    char Respues [100];
    printf("\nEncuesta de programa de citas\n");
    
    printf("\n1.-¿Viven relativamente cerca?");
    scanf("%s",Respues);
    if (strcmp(Respues, "si") == 0){
      Puntaje += 5;
    }
    printf("\n2.-¿Cómprate algún gusto culinario?");
    scanf("%s",Respues);
    if (strcmp(Respues, "si") == 0){
      Puntaje += 10;
    }
    printf("\n3.-¿Comparten o respetan sus creencias?");
    scanf("%s",Respues);
    if (strcmp(Respues, "si") == 0){
      Puntaje += 15;
    }
    printf("\n4.-¿Tienen 3 o más pasatiempos en común?");
    scanf("%s",Respues);
    if (strcmp(Respues, "si") == 0){
      Puntaje += 10;
    }
    printf("\n5.-¿Comparten algún lugar favorito en común?");
    scanf("%s",Respues);
    if (strcmp(Respues, "si") == 0){
      Puntaje += 10;
    }
    printf("\n6.-¿Coinciden  en alguna meta a corto, mediano o largo plazo?");
    scanf("%s",Respues);
    if (strcmp(Respues, "si") == 0){
      Puntaje += 20;
    }
    printf("\n7.-¿Consideras que la persona cumple con la mayoría de aspectos y/o cualidades que buscas en una relación ?");
    scanf("%s",Respues);
    if (strcmp(Respues, "si") == 0){
      Puntaje += 15;
    }
    printf("\n8.-¿Tienen afición por los mismos animales domésticos?");
    scanf("%s",Respues);
    if (strcmp(Respues, "si") == 0){
      Puntaje += 5;
    }
    printf("\n9.-¿Comparten interés 2 o más temas de conversación?");
    scanf("%s",Respues);
    if (strcmp(Respues, "si") == 0){
      Puntaje += 10;
    }
    printf("\n10.-¿Comparten gusto musical");
    scanf("%s",Respues);
    if (strcmp(Respues, "si") == 0){
      Puntaje += 5;
    }
    
    printf("\nEl resultado es: %d /100",Puntaje);
    
    if(Puntaje >= 70){
    printf("\nCompatible <3");
    }
    else 
    printf("\nTe rompera el corazón :(");
    return 0;
}

