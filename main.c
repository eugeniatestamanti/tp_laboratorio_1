#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


float sumar(float A,float B);
float restar(float A,float B);
float dividir(float A,float B);
float multiplicar(float A,float B);
int factorial(int A);

int main()
{
    float A;
    float B;

    char seguir='s';
    int opcion=0;

    while(seguir=='s')
    {
        printf("1- Ingresar 1er operando (A)\n");
        printf("2- Ingresar 2do operando (B)\n");
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n");


        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                {
                printf("A= \n");
                scanf("%f",&A);
                break;
                }
            case 2:
                {
                printf("B= \n");
                scanf("%f",&B);
                break;
                }
            case 3:
                {
                float suma=sumar(A,B);
                printf("A+B=%f \n", suma);
                break;
                }
            case 4:
                {
                float resta=restar(A,B);
                printf("A-B=%f \n", resta);
                break;
                }
            case 5:
                {
                float division=dividir(A,B);
                printf("A/B=%f \n", division);
                break;
                }
            case 6:
                {
                float multiplicacion=multiplicar(A,B);
                printf("A*B=%f \n", multiplicacion);
                break;
                }
            case 7:
                {
                int Afactorial = round(A);
                int Elfactorial = factorial(Afactorial);
                printf("El factorial es: %d\n", Elfactorial);
                break;
                }
            case 8:
                {
                float suma=sumar(A,B);
                printf("A+B=%f \n", suma);

                float resta=restar(A,B);
                printf("A-B=%f \n", resta);

                float division=dividir(A,B);
                printf("A/B=%f \n", division);

                float multiplicacion=multiplicar(A,B);
                printf("A*B=%f \n", multiplicacion);

                int Afactorial = round(A);
                int Elfactorial = factorial(Afactorial);
                printf("A!: %d\n", Elfactorial);

                break;
                }
            case 9:
                seguir = 'n';
                break;
        }
    }

    return 0;
}

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
    return A/B;
}

float multiplicar(float A,float B)
{
    return A*B;
}

int factorial(int Afactorial)
{
    if(Afactorial == 0)
    {
        return 1;
    }

    return Afactorial * factorial(Afactorial-1);
}
