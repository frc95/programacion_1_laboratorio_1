#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "funciones.h"

int main()
{
    float operadorUno=0;
    float operadorDos=0;
    int opcion=0;
    float resultado;
    int resultadoFactorial;
    do{
        system("cls");
        printf("1- Ingresar 1er operando (A=x)  %.2f\n",operadorUno);
        printf("2- Ingresar 2do operando (B=y)  %.2f\n",operadorDos);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");
        printf("Ingrese la opcion: ");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                operadorUno=pedirflotante("Ingrese el 1er operando: ");
                break;
            case 2:
                operadorDos=pedirflotante("Ingrese el 2do operando: ");
                break;
            case 3:
                resultado=sumar(operadorUno, operadorDos);
                printf("La suma es: %.2f \n",resultado);
                getch();
                break;
            case 4:
                resultado=restar(operadorUno, operadorDos);
                printf("La resta es: %.2f \n",resultado);
                getch();
                break;
            case 5:
                if(operadorDos==0)
                {
                    printf("No se puede dividir entre cero");
                }
                else
                {
                    resultado=division(operadorUno, operadorDos);
                    printf("La division es: %.2f \n",resultado);
                }
                getch();
                break;
            case 6:
                resultado=multiplicar(operadorUno, operadorDos);
                printf("La multiplicacion es: %.2f \n",resultado);
                getch();
                break;
            case 7:
                if(operadorUno<=0)
                {
                    printf("No se puede calcular el factorial con numeros negativos o con cero");
                }
                else
                {
                    resultadoFactorial=factorial((int)operadorUno);
                    printf("El factorial es: %d \n",resultadoFactorial);
                }
                getch();
                break;
            case 8:
                if(operadorUno<=0)
                {
                    printf("No se puede calcular el factorial con numeros negativos o con cero");
                }
                else if(operadorDos==0)
                {
                    printf("No se puede dividir entre cero");
                }
                else
                {
                    resultado=sumar(operadorUno, operadorDos);
                    printf("La suma es: %.2f \n",resultado);
                    resultado=restar(operadorUno, operadorDos);
                    printf("La resta es: %.2f \n",resultado);
                    resultado=division(operadorUno, operadorDos);
                    printf("La division es: %.2f \n",resultado);
                    resultado=multiplicar(operadorUno, operadorDos);
                    printf("La multiplicacion es: %.2f \n",resultado);
                    resultadoFactorial=factorial((int)operadorUno);
                    printf("El factorial es: %d \n",resultadoFactorial);
                }
                getch();
                break;
            case 9:
                break;
            default:
                printf("La opcion que ingreso es incorrecta");
                getch();
                break;
        }
    }while(opcion!=9);
    return 0;
}
