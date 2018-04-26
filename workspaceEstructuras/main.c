#include <stdio.h>
#include <stdlib.h>
typedef struct //Datos del domicilio
{
    char calle[50];
    int numero;
    char localidad[50];
    int piso;
    int dpto;
    int cp;
}eDomicilio;
typedef struct //Datos del profesor + estructura del domicilio
{
    int legajo;
    char nombre[50];
    eDomicilio domicilio; // se llama composicion: Estoy componiendo un dato a partir de otro dato

}eAlumno;

typedef struct //Datos del profesor + estructura del domicilio
{
    int legajo;
    char nombre[50];
    eDomicilio domicilio; // struct domicilio+nombre variable
}eProfesor;

int main()
{
    eAlumno miAlumno; //struct alumno+nombre variable
    miAlumno.legajo=400;
    miAlumno.domicilio.cp=1870;

    printf("legajo: %d -- cp: %d",miAlumno.legajo,miAlumno.domicilio.cp);
    return 0;
}
