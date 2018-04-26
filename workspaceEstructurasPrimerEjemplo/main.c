#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define T 2
typedef struct
{
    int legajo; // Es una referencia  // ocupa 4 bytes
    char nombre[50]; // Es una referencia porque es un vector // 1 byte //En total se usa 1*50+4+4=58
    float promedio; // ocupa 4 bytes


}eAlumno;

;
void mostrar(eAlumno unAlumno[], int);
void CargarAlumno(eAlumno unAlumno[], int);
void mostrarUnAlumno(eAlumno unAlumno);

int main()
{
    //int i;
    eAlumno miAlumno;//={1,"juan",3.25}; // Creamos variables
    //eAlumno otroAlumno;               // Creamos variables
    eAlumno clase[T];
    //for(i=0; i<T; i++)
    //{
    //    printf("Ingrese el legajo: ");  //Pido Datos
    //    scanf("%d",&clase[i].legajo);
    //    printf("Ingrese el nombre: ");
    //    fflush(stdin);
    //    gets(clase[i].nombre);
    //    printf("Ingrese el promedio: ");
    //    scanf("%f",&clase[i].promedio);
    //}
    CargarAlumno(clase,T);
    mostrar(clase,T);
    mostrarUnAlumno(miAlumno);
    //for(i=0; i<T; i++)
    //{
    //    mostrar(clase[i]);

    //}
    //otroAlumno.legajo=2;
    //strcpy(otroAlumno.nombre,"Maria");
    //otroAlumno.promedio=6;
    //printf("TAM: %d", sizeof(eAlumno));
    //printf("Ingrese el legajo: ");  //Pido Datos
    //scanf("%d",&miAlumno.legajo);
    //printf("Ingrese el nombre: ");
    //fflush(stdin);
    //gets(miAlumno.nombre);
    //printf("Ingrese el promedio: ");
    //scanf("%f",&miAlumno.promedio);

    //miAlumno=otroAlumno;// Copia un valor a otro

    //miAlumno.legajo=187;// El legajo de mi Alumno ahora es 187

    //strcpy(miAlumno.nombre, "Pedro");

    //mostrar(miAlumno);
    //mostrar(otroAlumno);

    //printf("%d %s %f\n",miAlumno.legajo,miAlumno.nombre,miAlumno.promedio);
    //printf("%d %s %f\n",otroAlumno.legajo,otroAlumno.nombre,otroAlumno.promedio);

    return 0;
}

void mostrar(eAlumno unAlumno[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        printf("%d %s %f\n",unAlumno[i].legajo,unAlumno[i].nombre,unAlumno[i].promedio);
    }

}

void CargarAlumno(eAlumno unAlumno[],int tam)

{
    int i;
    for(i=0; i<tam; i++)
    {
        printf("Ingrese el legajo: ");  //Pido Datos
        scanf("%d",&unAlumno[i].legajo);
        printf("Ingrese el nombre: ");
        fflush(stdin);
        gets(unAlumno[i].nombre);
        printf("Ingrese el promedio: ");
        scanf("%f",&unAlumno[i].promedio);
    }
}

void mostrarUnAlumno(eAlumno unAlumno)
{
    printf("%d %s %f\n",unAlumno.legajo,unAlumno.nombre,unAlumno.promedio);
}
