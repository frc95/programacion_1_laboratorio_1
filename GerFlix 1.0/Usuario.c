#include <stdio.h>
#include <string.h>
#include "Usuario.h"

void inicializarUsuariosEstado(eUsuario usuarios[], int cant)
{
    int i;

    for(i=0; i<cant; i++)
    {
        usuarios[i].estado = 0;
    }
}
void inicializarUsuariosHardCode(eUsuario usuarios[])
{


    int id[15] = {1000,1001,1002,1003,1004, 1005,1006,1007,1008,1009, 1010,1011,1012,1013,1014};
    char nombre[][50]= {"Juan","Maria","Pedro","Vanesa","Jose","Luisa","Laura","Marcelo","German","Victoria","Dafne","Antonela","Gisele","Dario","Pedro"};

    int serie[15] = {100,100,101,101,102,100,100,103,101,102,103,101,100,100,101};



    int i;

    for(i=0; i<15; i++)
    {
        usuarios[i].idUsuario=id[i];
        usuarios[i].idSerie=serie[i];
        usuarios[i].estado = 1;
        strcpy(usuarios[i].nombre, nombre[i]);

    }

}

void mostrarListaUsuarios(eUsuario usuarios[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        if(usuarios[i].estado==1)
        {
            printf("%d %s %d\n",usuarios[i].idUsuario,usuarios[i].nombre,usuarios[i].idSerie);
        }
    }
}

void mostrarUsuarioConSuSerie(eUsuario usuarios[], int tu, eSerie series[], int ts)
{
    int i; //usuarios
    int j; //series
    for(i=0; i<tu; i++)
    {
        if(usuarios[i].estado==1)
        {
            printf("%s ",usuarios[i].nombre);
            for(j=0; j<ts; j++)
            {
                if(series[j].estado==1)
                {
                    if(usuarios[i].idSerie==series[j].idSerie)
                    {
                        printf("%s",series[j].nombre);
                        break;
                    }
                }
            }
            printf("\n");
        }

    }
}

void mostrarListaSeriesConSusUsuarios(eUsuario usuarios[], int tam)
{
    int i;
    printf("TBBT\n");
    for(i=0; i<tam; i++)
    {
        if(usuarios[i].estado==1)
        {
            if(usuarios[i].idSerie==100)
            {
                printf("%s\n",usuarios[i].nombre);
            }

        }
    }
    printf("\n");
    printf("TWD\n");
    for(i=0; i<tam; i++)
    {
        if(usuarios[i].estado==1)
        {
            if(usuarios[i].idSerie==101)
            {
                printf("%s\n",usuarios[i].nombre);
            }

        }
    }
    printf("\n");
    printf("GOT\n");
    for(i=0; i<tam; i++)
    {
        if(usuarios[i].estado==1)
        {
            if(usuarios[i].idSerie==102)
            {
                printf("%s\n",usuarios[i].nombre);
            }

        }
    }
    printf("\n");
    printf("BB\n");
    for(i=0; i<tam; i++)
    {
        if(usuarios[i].estado==1)
        {
            if(usuarios[i].idSerie==103)
            {
                printf("%s\n",usuarios[i].nombre);
            }

        }
    }
    printf("\n");
    printf("LCDP\n");
    for(i=0; i<tam; i++)
    {
        if(usuarios[i].estado==1)
        {
            if(usuarios[i].idSerie==103)
            {
                printf("%s\n",usuarios[i].nombre);
            }

        }
    }
}
