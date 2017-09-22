#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include "funciones.h"

void altaDePersona(EPersona datos[], int MAX)
{
    int i;

    for(i=0; i<MAX; i++)
    {
        if(datos[i].estado==0)
        {
        printf("Ingrese nombre: ");
        fflush(stdin);
        gets(datos[i].nombre);
        printf("Ingrese edad: ");
        scanf("%d", &datos[i].edad);
        printf("Ingrese dni: ");
        scanf("%d", &datos[i].dni);
        datos[i].estado=1;
        break;
        }
    }
}

void bajaDePersona(EPersona datos[], int MAX)
{

    int i;
    int auxDni;
    char respuesta;
    int flag=0;
    printf("\nIngrese el DNI del usuario a borrar. \n");
    fflush(stdin);
    scanf("%d", &auxDni);
    for (i=0; i<MAX; i++)
    {
        if(datos[i].dni==auxDni && datos[i].estado==1)
        {
            flag=1;
            printf("Seguro que desea eliminar al usuario? \n");
            fflush(stdin);
            respuesta=getche();
            if(respuesta=='s')
            {
                datos[i].estado=0;
                printf("\n\nUsuario borrado\n\n");
            }
            else
            {
                printf("\n\nUsuario no borrado.\n3\n");
            }
            break;
        }

    }
    if(flag==0)
    {
        printf("El usuario no se enuentra en el registro\n");
    }

}

void listarPersonas(EPersona datos[], int MAX)
{
    int i;
    int j;
    char auxnombre[50];
    for(i=0; i<MAX-1; i++)
    {
        for(j=i+1; j<MAX; j++)
        {
            if((strcmp(datos[i].nombre, datos[j].nombre)==1)&& datos[i].estado==1)
            {
                strcpy(auxnombre,datos[i].nombre);
                strcpy(datos[i].nombre,datos[j].nombre);
                strcpy(datos[j].nombre,auxnombre);
            }
        }
    }
    printf("\nLista ordenada alfabeticamente:\n");
    for(i=0;i<MAX;i++)
    {
        printf("%s\n",datos[i].nombre);
    }

}

void graficarPersonas(EPersona datos[], int MAX)
{
    int i;
    int acumA=0;
    int acumB=0;
    int acumC=0;
    int max;
    int flag1=0;

    for (i = 0; i < MAX; i++)
    {
        if(datos[i].estado==1)
        {
            if(datos[i].edad<=18)
            {
             acumA++;
            }

            if(19<datos[i].edad && datos[i].edad<35)
            {
            acumB++;
            printf("\t");
            }

            if(datos[i].edad>=35)
            {
             acumC++;
            }
        }
    }
    for(i=0;i<MAX;i++)
    {
        if(acumA>acumB && acumA>acumC)
        {
            max=acumA;
        }
        else if(acumB>acumA && acumB>acumC)
        {
            max=acumB;
        }
        else
        {
            max=acumC;
        }
    }

    for(i=max;i>0;i--)
    {
        if(i<=acumA)
        {
            printf("*");
        }
         if(i<=acumB && flag1==0)
        {
            flag1=1;
            printf("\t*");
        }

        if(i<=acumC)
        {
            printf("\t*");
        }
      printf("\n");
    }
     printf("<=18\t19-35\t>=35");
     printf("\n%d\t%d\t%d\n", acumA, acumB, acumC);
}

