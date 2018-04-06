#include <stdio.h>
#include "Funciones.h"



int pedirEntero(char mensaje[], int min, int max)
{
     int numero;
     printf("Ingrese %s", mensaje);
     scanf("%d",&numero);
     while(numero<min || numero>max)
     {
         printf("Error %s", mensaje);
         scanf("%d",&numero);
     }
     return numero;
}
