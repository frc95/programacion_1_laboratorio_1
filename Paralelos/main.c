#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define T 5 //No es obligatorio pero el define nos facilita todo
int buscarEntero (int[],int,int);
int main()
{
    int vectorint[T]={1,2,3,4,5};
    char vectorstring[T][30]={"juan","ana","maria","pedro","ramon"};// 30 es la cantidad de caracteres
    float vectorfloat[T]={5.3,4.5,6.1,5.8,7.8};
    int i;
    int j;// La J en caso que queramos hacer ordenamiento
    int auxInt;  // auxiliar de entero necesario para el ordenamiento de una lista de muchas variables a la vez
    char auxString[30]; // auxiliar de caracteres [30]siempre lleva la cantidad de caracteres
    float auxFloat; // auxiliar de flotantes
    for(i=0;i<T-1;i++) // cuando empezamos el ordenamiento siemptre T-1
    {
        for(j=i+1;j<T;j++)// siempre j=i+1
        {
            if(strcmp(vectorstring[i],vectorstring[j])>0)// ordenamiento por nombre de una lista de numeros,etc.>0
            {
                strcpy(auxString,vectorstring[i]); //siempre strcpy
                strcpy(vectorstring[i],vectorstring[j]);
                strcpy(vectorstring[j],auxString);

                auxInt=vectorint[i]; // ordenamos los int de acuerdo a los nombre
                vectorint[i]=vectorint[j];
                vectorint[j]=auxInt;

                auxFloat=vectorfloat[i]; // ordenamos los flotantes de acuerdo a los nombre
                vectorfloat[i]=vectorfloat[j];
                vectorfloat[j]=auxFloat;
                // Todo esto es ordenar por nombre. Cada uno seguira teniendo su lugajo como se muestra arriba
            }
        }
    }
    for(i=0;i<T;i++)// mostrar los vectores
    {
        if(vectorint[i]!=0)// esto nos ayuda para no mostrar los vectores que no tienen variables. En vez de 10 muestra los 5 solos
        {
            printf("%5d--%15s--%.2f\n",vectorint[i],vectorstring[i],vectorfloat[i]);
        }
    }
    auxInt=buscarEntero(vectorint,T,3);// Buscamos el legajo (Vectoresdelegajo,T,El legajo que quiero encontrar)
    if(auxInt!=-1)// si se encuentra el legajo. Siempre !=-1
    {
        printf("\n%s\n",vectorstring[auxInt]);//quiero que me muestro solo el nombre del legajo que quiero buscar vectorstring[auxInt]
    }
    else //No existe el legajo
    {
        printf("Legajo inexsistente");
    }
    return 0;
}

int buscarEntero(int enteros[],int tam,int cual)//Funcion buscar indice(Legajo)
{
    int indice=-1;//siempre iniciamos -1
    int i;
    for(i=0; i<tam;i++)//i<tam siempre
    {
        if(enteros[i]==cual)//enteros[i]==cual siempre
        {
            indice=i; //indice=1 siempre
            break; // break siempre
        }
    }
    return indice;
}
