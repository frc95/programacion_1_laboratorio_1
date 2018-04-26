#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#define TAM 2

int buscarLibre(int[], int);
void mostrarAlumnos(int[], char[][20], int[], int[], float[], int);
float calcularPromedio(int, int);
//void cargarAlumno(int[], char[][20], int[], int[], int);
void ordenarProductos(int[], char[][20], int[], int[], float[], int);

int main()
{
    int legajo[TAM]= {};
    char nombre[TAM][20]={};
    int nota1[TAM]={};
    int nota2[TAM]={};
    float promedio[TAM]={};
    int opcion;
    int indice;
    int i;
    int lega;
    char nuevoNombre[20];
    char seguir;
    int flag;
    do
    {
        printf("1. ALTAS\n2. MOSTRAR\n3. MODIFICAR\n4. BAJA\n5. ORDENAR (por nombre)\n9. SALIR\nElija una opcion: ");
        scanf("%d", &opcion);

        switch(opcion)
        {
        case 1:
            indice=buscarLibre(legajo,TAM);
            if(indice == -1)
            {
                printf("No hay lugar\n");
            }
            else
            {
                printf("Ingrese el legajo: ");
                scanf("%d",&legajo[indice]);
                printf("Ingrese el nombre: ");
                fflush(stdin);
                scanf("%[^\n]", nombre[indice]);
                printf("Ingrese la primera nota : ");
                scanf("%d",&nota1[indice]);
                printf("Ingrese la segunda nota: ");
                scanf("%d",&nota2[indice]);
                //cargarAlumno(legajo[indice],nombre[indice][20],nota1[indice],nota2[indice],TAM);
                promedio[indice]=calcularPromedio(nota1[indice],nota2[indice]);
                printf("Alumno ingresado\n");
            }
            break;
        case 2:

        mostrarAlumnos(legajo, nombre, nota1, nota2, promedio,TAM);

        break;

        case 3:
            flag=0;
            mostrarAlumnos(legajo, nombre, nota1, nota2, promedio,TAM);
            printf("Ingrese el legajo: ");
            scanf("%d",&lega);
            for(i=0;i<TAM;i++)
            {
                if(lega==legajo[i])
                {
                     //printf("-- %d --   %s --  %d --   %d --  %.2f\n", legajo[i], nombre[i], nota1[i], nota2[i], promedio[i] );
                     printf("Ingrese el nuevo nombre: ");
                     fflush(stdin);
                     gets(nuevoNombre);
                     //strcpy(nombre[i],nuevoNombre);
                     printf("Desea continuar? ");
                     seguir=getche();

                     if(seguir=='s')
                     {
                         strcpy(nombre[i],nuevoNombre);
                     }
                     else
                     {
                         printf("\nAccion cancelada\n");

                     }
                     flag = 1;
                     break;

                }
            }
            if(flag == 0)
            {
                printf("El legajo no existe\n");
            }

            break;
        case 4:
            flag=0;
            mostrarAlumnos(legajo, nombre, nota1, nota2, promedio,TAM);
            printf("Ingrese el legajo: ");
            scanf("%d",&lega);
            for(i=0;i<TAM;i++)
            {
                if(lega==legajo[i])
                {
                     printf("Desea continuar? ");
                     seguir=getche();

                     if(seguir=='s')
                     {
                         legajo[i]=0;
                     }
                     else
                     {
                         printf("\nAccion cancelada\n");

                     }
                     flag = 1;
                     break;

                }
            }
            if(flag==0)
            {
                printf("El legajo no existe\n");
            }
            break;
        case 5:
            ordenarProductos(legajo,nombre,nota1,nota2,promedio,TAM);
            mostrarAlumnos(legajo, nombre, nota1, nota2, promedio,TAM);
            break;

        }

        system("pause");
        system("cls");

    }
    while(opcion!=9);




    return 0;
}

int buscarLibre(int legajos[], int tam)
{
    int i;
    int index=-1;
    for(i=0; i<tam;i++)
    {
        if(legajos[i]==0)
        {
            index=i;
            break;
        }
    }
    return index;
}

//void cargarAlumno(int legajos[], char nombres[][20], int notas1[], int notas2[], int tam)
//{
    //printf("Ingrese el legajo: ");
    //scanf("%d",&legajo[tam][20]);
    //printf("Ingrese el nombre: ");
    //fflush(stdin);
    //scanf("%[^\n]", nombre[tam]);
    //printf("Ingrese la primera nota : ");
    //scanf("%d",&nota1[tam]);
    //printf("Ingrese la segunda nota: ");
    //scanf("%d",&nota2[tam]);
//}


float calcularPromedio(int notas1, int notas2)
{
    float promedio;
    promedio = (float)(notas1+notas2)/2;
    return promedio;
}

void mostrarAlumnos(int legajos[], char nombres[][20], int nota1[], int nota2[], float promedio[], int tam)
{
    int i;
    printf("   Legajo    Nombre  Nota 1  Nota 2 Promedio\n");
    for(i=0; i<tam; i++)
            {
                if(legajos[i]!=0)
                {
                    printf("-- %d --   %s --  %d --   %d --  %.2f\n", legajos[i], nombres[i], nota1[i], nota2[i], promedio[i] );
                }

            }

}

void ordenarProductos(int legajo[], char nombre[][20], int nota1[], int nota2[], float promedio[], int tam)
{
    int auxInt;
    float auxFloat;
    char auxString[20];
    int i;
    int j;
    for(i=0; i<tam-1; i++)
    {
        for(j=i+1; j<tam; j++)
        {
            if(stricmp(nombre[i],nombre[j])>0)
            {
                strcpy(auxString,nombre[i]);
                strcpy(nombre[i],nombre[j]);
                strcpy(nombre[j], auxString);


                auxInt = legajo [i];
                legajo[i]= legajo[j];
                legajo[j]=auxInt;


                auxInt = nota1[i];
                nota1[i]= nota1[j];
                nota1[j]=auxInt;

                auxInt = nota2[i];
                nota2[i]= nota2[j];
                nota2[j]=auxInt;

                auxFloat = promedio[i];
                promedio[i]= promedio[j];
                promedio[j]=auxFloat;


            }
        }
    }
}
