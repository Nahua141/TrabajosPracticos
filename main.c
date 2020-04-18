#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include"calculadora.h"


int main()
{
    char seguir='s';
    int primerNumero;
    int segundoNumero;
    int factorial=1;
    int factorialDos=1;
   // int flagSeguir=0;

    int resultado;
    do
    {
        switch(opcion())
        {
        case 1:
            printf("Introduzca el primer numero: ");
            scanf("%d",&primerNumero);
            break;
        case 2:
            printf("Introduzca el segundo numero: ");
            scanf("%d",&segundoNumero);
            break;
        case 3:
            printf("%d + %d\n", primerNumero, segundoNumero);
            printf("%d - %d\n", primerNumero, segundoNumero);
            printf("%d / %d\n", primerNumero, segundoNumero);
            printf("%d * %d\n", primerNumero, segundoNumero);
            printf(" %d! y %d!\n", primerNumero, segundoNumero, factorial, factorialDos);

            break;
        case 4:
            resultado=primerNumero+segundoNumero;
            printf("La suma de %d + %d es igual a %d\n",primerNumero,segundoNumero, resultado);
            resultado=primerNumero-segundoNumero;
            printf("La resta de %d - %d es igual a %d\n",primerNumero,segundoNumero, resultado);
            resultado=primerNumero*segundoNumero;
            printf("La multiplicacion de %d * %d es igual a %d\n",primerNumero,segundoNumero, resultado);

            if(segundoNumero !=0)
            {
                resultado=primerNumero/segundoNumero;
                printf("La division de %d / %d es igual a %d\n",primerNumero,segundoNumero, resultado);
            }
            else
            {
                printf("No es posible dividir por 0\n");
            }

            for(int i=1; i<=primerNumero; i++)
            {
                factorial=factorial* i;
            }
            printf("El factorial de %d es %d \n", primerNumero, factorial);

            for(int i=1; i<=segundoNumero; i++)
            {
                factorialDos=factorialDos* i;
            }
            printf("El factorial de %d es %d \n", segundoNumero, factorialDos);
            break;

        case 5:
            printf("Desea continuar?\n");
            seguir='n';
            break;



        default:
            printf("La opcion no existe");

        }

        system("pause");
    }
    while(seguir=='s');

    return 0;
}


