#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"
int main()
{
    char nombre[15];
    char apellido[15];
    char nombreApellido[20];
    //char nombreApellido[20];
    int cant;
    int opcion=0;
    do
    {
        printf("1- Ingresar nombre\n");
        printf("2- Ingresar apellido\n");
        printf("3- Ingresar nombre y apellido\n");
        printf("4- Salir\n");
        printf("Ingrese la opcion: ");
        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                printf("Ingrese el nombre: ");
                fflush(stdin);// limpia el buffer
                gets(nombre);//get string recibe un vector de char
                while(strlen(nombre)>14)
                {
                    printf("ERROR Reingrese el nombre: ");
                    fflush(stdin);
                    gets(nombre);
                }
                cant=strlen(nombre);
                printf("cantidad de caracteres de nombre : %d\n",cant);
                break;
            case 2:
                printf("Ingrese el apellido: ");
                fflush(stdin);
                gets(apellido);
                while(strlen(apellido)>14)
                {
                printf("ERROR Reingrese el apellido: ");
                fflush(stdin);
                gets(apellido);
                }
                cant=strlen(apellido);
                printf("cantidad de caracteres de apellido : %d\n",cant);
                break;
            case 3:
                printf("Ingrese el nombre y apellido: ");
                fflush(stdin);
                gets(nombreApellido);
                while(strlen(nombreApellido)>19)
                {
                    printf("ERROR Reingrese el nombre y apellido: ");
                    fflush(stdin);
                    gets(nombreApellido);
                }
                cant=strlen(nombreApellido);
                printf("cantidad de caracteres de apellido : %d\n",cant);
                break;
            case 4:
                break;
            default:
                printf("Error en la opcion: ");
                break;
        }
    }while(opcion!=4);
    return 0;
}
