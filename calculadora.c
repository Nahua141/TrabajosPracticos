#include <stdio.h>
#include <stdlib.h>
#include"calculadora.h"




int opcion()
{

    int opcion;


    system("cls");
    printf("*** Menu de opciones***\n\n");

    printf("1-Ingresar primer operando x=\n");
    printf("2-Ingresar segundo operando y=\n");
    printf("3-Mostrar los calculos\n");
    printf("4-Mostrar los resultados\n");
    printf("5-Continuar?\n");
    printf("Elija una opcion: ");
    fflush(stdin);
    scanf("%d", &opcion);

    return opcion;
}
