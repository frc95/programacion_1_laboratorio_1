#include <stdio.h>
#include <stdlib.h>

int main()
{
    //int vector[5]={10,3,22,8,15}; // ordenamiento con numeros enteros
    char vector[5]={'w','a','v','z','h'}; // orde namiento con caracteres
    char auxiliar;
    //int auxiliar;
    int i;
    int j;
    for(i=0; i<4; i++)// METODO DE BURBUJEO
    {
        for(j=i+1; j<5; j++)// METODO DE BURBUJEO
        {
            if(vector[i]>vector[j])// METODO DE BURBUJEO. Si cambio de manor a mayor o viceversa cambio el orden
            {
                //swap
                auxiliar=vector[i];
                vector[i]=vector[j];
                vector[j]=auxiliar;
            }
        }
    }
    for(i=0;i<5;i++)
    {
        printf("%c\n",vector[i]);
    }

    return 0;
}
