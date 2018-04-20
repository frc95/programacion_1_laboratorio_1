#include <stdio.h>
#include <stdlib.h>
#define TAM 2

int buscarLibre(int[], int);
void mostrarAlumnos(int[], char[][20], int[], int[], float[], int);
float calcularPromedio(int, int);
int cargarAlumno(int[], char[][20], int[], int[], float[], int);

int main()
{
    int legajo[TAM]= {};
    char nombre[TAM][20];
    int nota1[TAM];
    int nota2[TAM];
    float promedio[TAM];
    int opcion;
    int index;
    //int i;
    do
    {
        printf("1. ALTAS\n2. MOSTRAR\n3. MODIFICAR\n4.BAJA\n5.ORDENAR (por nombre)\n9. SALIR\nElija una opcion: ");
        scanf("%d", &opcion);

        switch(opcion)
        {
        case 1:

            index=cargarAlumno(legajo,nombre,nota1,nota2,promedio,TAM);
            if(index == -1)
            {
                printf("No hay lugar\n");
            }
            else
            {
                printf("Alumno ingresado\n");
            }
            break;
        case 2:

        mostrarAlumnos(legajo,nombre,nota1,nota2,promedio,TAM);




        break;
        }

    }
    while(opcion!=9);




    return 0;
}

int buscarLibre(int legajos[], int tam)
{
    int index=-1;
    int i;
    for(i=0; i<tam;i++)
    {
        if(legajos[i])
        {
            index=i;
            break;
        }
    }
    return index;
}

int cargarAlumno(int legajos[], char nombres[][20], int nota1[], int nota2[], float promedio[], int tam)
{
    int index=-1;
    int i;
    for(i=0;i<tam;i++)
    {
        printf("Ingrese el legajo: ");
        scanf("%d",&legajos[i]);
        printf("Ingrese el nombre: ");
        fflush(stdin);
        gets(nombres[i]);
        printf("Ingrese la nota 1: ");
        scanf("%d",&nota1[i]);
        printf("ingresse la nota 2: ");
        scanf("%d",&nota2[i]);
        promedio[i]=calcularPromedio(nota1[i],nota2[i]);
    }
            if(index!=-1)
            {
                printf("Ingrese el legajo: ");
                scanf("%d",&legajos[i]);
                printf("Ingrese el nombre: ");
                fflush(stdin);
                gets(nombres[i]);
                printf("Ingrese la nota 1: ");
                scanf("%d",&nota1[i]);
                printf("ingresse la nota 2: ");
                scanf("%d",&nota2[i]);
                promedio[i]=calcularPromedio(nota1[i],nota2[i]);//Pedir Datos

            }

            return index;
}


float calcularPromedio(int nota1, int nota2)
{
    float promedio;
    promedio = (float)(nota1+nota2)/2;
    return promedio;
}

void mostrarAlumnos(int legajos[], char nombres[][20], int nota1[], int nota2[], float promedio[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
            {
                if(legajos[i]!=0)
                {
                    printf("%d %s %d %d %f\n", legajos[i], nombres[i], nota1[i], nota2[i], promedio[i] );
                }

            }

}
