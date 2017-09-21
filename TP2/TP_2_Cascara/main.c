#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include "funciones.h"
#define MAX 20


int main()
{
    EPersona datos[MAX];
    int i;
    for(i=0; i<MAX; i++)
    {
        datos[i].estado=0;
    }

    char seguir='s';
    int opcion=0;

    while(seguir=='s')
    {
        printf("1- Agregar persona\n");
        printf("2- Borrar persona\n");
        printf("3- Imprimir lista ordenada por nombre\n");
        printf("4- Imprimir grafico de edades\n\n");
        printf("5- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                system("cls");
                altaDePersona(datos, MAX);
                break;
            case 2:
                system("cls");
                bajaDePersona(datos, MAX);
                break;
            case 3:
                system("cls");
                listarPersonas(datos, MAX);
                break;
            case 4:
                system("cls");
                graficarPersonas(datos, MAX);
                break;
            case 5:
                seguir = 'n';
                break;
        }
    }

    return 0;
}
