#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include <math.h>


float sumar(float A, float B)
{
   return A+B;
}

float restar(float A,float B)
{
    return A-B;
}

float dividir(float A,float B)
{
    if(B==0)
    {
        printf("No existe la division por cero\n");
    }

    return A/B;

}

float multiplicar(float A,float B)
{
    return A*B;
}

int factorial(int Aentero)
{
    if(Aentero == 0)
    {
        return 1;
    }

    return Aentero;
}

