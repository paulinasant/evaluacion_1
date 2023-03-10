import os
def printMenu():
    ''' printMenu
    Author: Santillan Osorio Ada Paulina
    Date: 10/03/2023
    Description: Descripción de los tipos de datos en python
    '''
    os.system('cls')
    print("Bienvenido al menú seleccione una opciónn \n\n")
    print("\t1)SUMA\n")
    print("\t2)RESTA\n")
    print("\t3)MULTIPLICACION\n")
    print("\t4)DIVISION\n")
    option = input()
    if(option):
        return int (option)
    else:
        return 0


def main():
    flag = 0
    inutil =''
    while(flag!=4):
        flag = printMenu()
        
        if (flag==1):
            print("\n1 SUMA")
            n1=int(input("Intro número uno: "))
            n2=int(input("Intro numero dos: "))
            suma=n1+n2
            print("La suma es: ",suma)
            if suma % 2 == 0:
                print(suma, "El número es par")
            else:
                print(suma,"El número es impar")
        elif (flag==2):
            print("\n2  RESTA")
            num1=int(input("Intro número uno: "))
            num2=int(input("Intro numero dos: "))
            resta=num1-num2
            if resta%5==0:
                print(resta,"El número es multiplo de 5")
            else:
                print(resta,"El numero es impar")
        elif (flag==3):
            print("\n3 MULTIPLICACION")
            numero1=int(input("Intro número uno: "))
            numero2=int(input("Intro numero dos: "))
            mult=numero1+numero2
            if mult>=10:
                print(mult,"Es mayor a 10")
            else:
                print(mult,"es menor a 10")
        elif (flag==4):
            print("\n4 DIVISION")
            enum1=int(input("Intro número uno: "))
            enum2=int(input("Intro numero dos: "))
            division=enum1-(enum1//enum2*enum2)
            if division == 0:
                print(division,"No tiene residuo")
            else:
                print(division,"Tiene residuo")
        elif (flag==0):
            print("\nNo valido")
        else:
            print("\nNo valido")

        print("\nOprima enter tecla cualquiera para continuar ")
        input(inutil)
    print("excelente")

if __name__ == "__main__":
    main()
    
 #1.¿Qué es lo que hace el código en un comentario antes de modificarlo?
#Nos muestra el menú y a la hora de seleccionar una opción nos parece “no valido” y a continuación de que oprimamos enter para continuar y nos mostrara de nuevo el menú.
#2.	¿Cuál es la sintaxis de un while?
#Un ciclo while evalúa una condición y ejecuta el código si la condición es verdadera. El bloque de código se ejecuta repetidamente hasta que la condición se vuelve falsa o se vuelve falsa.
#3.	¿Exite swhitch en python?
#No existe switch en python
#4.	¿Qué es un elif?
#Es como si combináramos else if, utilizada para enlazar varios else if y aumentar las tabulaciones.
#5.	¿Qué función de se ejecuta al correr el script?
#Sintaxis de comandos  

    
