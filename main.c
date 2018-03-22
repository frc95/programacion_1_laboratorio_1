#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeroUno;
    int numeroDos;
    int numeroTres;
    int mayor;
    printf("Ingrese el primer numero\n");
    scanf("%d",&numeroUno);
    printf("Ingrese el segundo numero\n");
    scanf("%d",&numeroDos);
    printf("ingrese el tercer numero\n");
    scanf("%d",&numeroTres);
    if(numeroUno>numeroDos && numeroUno>numeroTres)
    {
        mayor=numeroUno;
    }
    else
    {
        if(numeroDos>numeroUno && numeroDos>numeroTres)
        {
            mayor=numeroDos;
        }
        else
        {
            mayor=numeroTres;
        }
    }
    printf("El numero mayor es: %d",mayor);
    return 0;
}
