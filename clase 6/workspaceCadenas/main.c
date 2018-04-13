#include <stdio.h>
#include <stdlib.h>
int contarPares(int[],int);
/** \brief Determina si un caracter esta o no esta.
 *
 * \param char[] coleccion de caracteres
 * \param int tamaño de la coleccion
 * \param char caracter a buscar
 * \return int -1 si no lo encuentra o el indice del valor encontrado
 *
 */
int buscarchar(char[], int, char);
int main()
{
    int vector[5]={5,2,9,6,5};
    char letras[5]={'f','g','i','m','q'};
    int indexLetra;
    int cantidad;
    cantidad=contarPares(vector, 5);
    indexLetra=buscarchar(letras, 5, 'a');
    if(indexLetra==-1)
    {
        printf("No encontro el caracter\n");
    }
    else
    {
        printf("Encontro el caracter\n");
    }
    printf("Cantidad de pares: %d",cantidad);
    return 0;
}
int contarPares(int array[],int cantidad)
{
    int contPares=0;
    int i;
    for(i=0;i<cantidad;i++)
    {
        if(array[i]%2==0)
        {
            contPares++;
        }
    }
    return contPares;
}
int buscarchar(char array[], int cantidad, char caracter)
{
    int index=-1;
    int i;
    for(i=0; i<cantidad; i++)
    {
        if(array[i]==caracter)
        {
            index=i;
            break;
        }
    }
    return index;
}
