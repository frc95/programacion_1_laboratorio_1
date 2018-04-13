#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Tarea: van a declarar 3 variables nombre, apellido, apellido y nombre y sacar la cantidad de caracteres
//el usuario ingresa el apellido o el nombre
//apellido= scarafilo
//nombre= german
//y si selecciona apellido y nombre al mismo tiempo= german scarafilo
char nombre[?];
char apellido[?];
char apellidoynombre[?];
int main()
{
    char palabra1[15];
    char palabra2[15];
    char buffer[1024];
    //  int cant;
    int comp;
    printf("Ingrese una palabra: ");
    fflush(stdin);// limpia el buffer
    gets(buffer);//get string recibe un vector de char
    while(strlen(buffer)>14)// sirve para que usuario no se pase en la cantidad de caracteres
    {
        printf("Reingrese una palabra: ");
        fflush(stdin);
        gets(buffer);
    }
    //cant=strlen(palabra1);// strlen cuenta la cantidad de caracteres que tiene un vector. Cuenta tambien espacios.
    strcpy(palabra1, buffer);// copia en una cadena a otra strcpy("destino", "origen")
    strcpy(palabra2, "gato");
    comp=strcmp(palabra1, palabra2);// compara la primera variable con la segunda.PD: hay que tener cuidado con el orden.
    printf("Resultado de la comparacion: %d\n",comp);
    //printf("cantidad de caracteres de palabra 1: %d\n",cant);
    printf("palabra 1: %s\npalabra 2: %s",palabra1,palabra2);
    return 0;
}
