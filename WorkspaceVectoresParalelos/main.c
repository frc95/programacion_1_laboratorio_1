#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define T 3
float CalcularPromedio (int,int);
void mostrarValores(int[], char[][30], int[], int[], float[],int);
int buscarLegajo(int[],int,int)
int main()
{
    int legajo[T];
    char nombre[T][30]; // Se guarda 3 nombres y en cada uno 29 caracteres.
    int nota1[T];
    int nota2[T];
    float promedio[T];
    int i;
    int indexLegajo;
    //int j;
    //int auxiliar;
    for(i=0;i<T;i++)
    {
        printf("Ingrese el legajo: ");
        scanf("%d",&legajo[i]);
        printf("Ingrese el nombre: ");
        fflush(stdin);
        gets(nombre[i]);
        printf("Ingrese la nota 1: ");
        scanf("%d",&nota1[i]);
        printf("ingresse la nota 2: ");
        scanf("%d",&nota2[i]);
        promedio[i]=CalcularPromedio(nota1[i],nota2[i]);

    }
    mostrarValores(legajo,nombre,nota1,nota2,promedio,T);
    indexLegajo=buscarLegajo(legajo,T,5);
    if(indexLegajo!=-1)// si se encuentra el legajo. Siempre !=-1
    {
        printf("\n%d\n",legajo[indexLegajo]);//quiero que me muestro solo el nombre del legajo que quiero buscar vectorstring[auxInt]
    }
    else //No existe el legajo
    {
        printf("Legajo inexsistente");
    }
    return 0;
}

float CalcularPromedio (int A, int B)
{
    float resultado;
    resultado=(float)(A+B)/2;
    return resultado;
}

void mostrarValores(int legajo[],char nombre[][30],int nota1[], int nota2[], float promedio[], int cantidad)
{
    int i;
    for(i=0;i<cantidad;i++)
    {
        printf("%5d--%15s--%5d--%5d--%.2f\n",legajo[i],nombre[i],nota1[i],nota2[i],promedio[i]);
    }
}

int buscarLegajo(int legajo[],int tam,int leg)
{
    int indice=-1;//siempre iniciamos -1
    int i;
    for(i=0; i<tam;i++)//i<tam siempre
    {
        if(legajo[i]==leg)//enteros[i]==cual siempre
        {
            indice=i; //indice=1 siempre
            break; // break siempre
        }
    }
    return indice;
}

