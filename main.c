#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nombre [128];
    float sueldo;
    float aumento;
    float sueldoFinal;
    int porcentaje;
    printf("Ingrese su nombre \n");
    scanf("%s",nombre);
    printf("Ingrese el sueldo \n");
    scanf("%f",&sueldo);
    printf("Ingrese el porcentaje \n");
    scanf("%d",&porcentaje);
    aumento=(porcentaje*sueldo)/100;
    sueldoFinal=sueldo+aumento;
    printf("Su nombre es: %s -- ,su sueldo es: %f -- \n,su aumento es del: %d %% -- ,su sueldo final es de: %f",nombre,sueldo,porcentaje,sueldoFinal);
    return 0;
}
