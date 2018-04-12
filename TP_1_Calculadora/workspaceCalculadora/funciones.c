#include <stdio.h>
#include "funciones.h"
float pedirflotante(char mensaje[])
{
    float numero;
    printf("%s", mensaje);
    scanf("%f",&numero);
    return numero;
}

float sumar(float A, float B)
{

    float suma;
    suma=A+B;
    return suma;
}

float restar(float A, float B)
{
    float resta;
    resta=A-B;
    return resta;
}

float division(float A, float B)
{
    float dividir;
    dividir=A/B;
    return dividir;

}

float multiplicar(float A, float B)
{
    float multi;
    multi=A*B;
    return multi;
}


int factorial(int A)
{
    char respuesta;
    if(A==1)
    {
        respuesta=1;
    }
    else
    {
       respuesta=A*factorial(A-1);
    }
    return respuesta;
}
