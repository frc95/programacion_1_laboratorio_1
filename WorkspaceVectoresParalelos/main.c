#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float CalcularPromedio (int,int);
void mostrarValores(int[], char[][30], int[], int[], float[],int);
int main()
{
    int legajo[3];
    char nombre[3][30]; // Se guarda 3 nombres y en cada uno 29 caracteres.
    int nota1[3];
    int nota2[3];
    float promedio[3];
    int i;
    for(i=0;i<3;i++)
    {
        printf("Ingrese el legajo: ");
        scanf("%d",&legajo[i]);
        printf("\nIngrese el nombre: ");
        fflush(stdin);
        gets(nombre[i]);
        printf("\nIngrese la nota 1: ");
        scanf("%d",&nota1[i]);
        printf("\ningresse la nota 2: ");
        scanf("%d",&nota2[i]);
        promedio[i]=CalcularPromedio(nota1[i],nota2[i]);

    }
    mostrarValores(legajo,nombre,nota1,nota2,promedio,3);
    return 0;
}

float CalcularPromedio (int A, int B)
{
    float resultado1;
    float resultado2;
    resultado1=(float)A+(float)B;
    resultado2=resultado1/2;
    return resultado2;
}
void mostrarValores(int legajo[],char nombre[][30],int nota1[], int nota2[], float promedio[], int cantidad)
{
    int i;
    for(i=0;i<cantidad;i++)
    {
        printf("%5d %15s %5d %5d %.2f\n",legajo[i],nombre[i],nota1[i],nota2[i],promedio[i]);
    }
}
