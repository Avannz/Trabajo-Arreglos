#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

int cargarArreglo(int a[]);
void mostrarArreglo(int a[], int validos);
int sumaArreglo (int a[], int validos);
void cargarPila (int a[],int validos, Pila *pila);

int main()
{
    int cantidad = 0;
    int suma = 0;
    int arreglo[6];
    int op;
    int i = 0;

    Pila pila1;
    inicpila(&pila1);

    printf("==========================================\n");
    printf("=                TP1 PILAS               =\n");
    printf("==========================================\n");
    printf("= -Ejercicio 1             -Ejercicio 8  =\n");
    printf("= -Ejercicio 2             -Ejercicio 9  =\n");
    printf("= -Ejercicio 3             -Ejercicio 10 =\n");
    printf("= -Ejercicio 4             -Ejercicio 11 =\n");
    printf("= -Ejercicio 5             -Ejercicio 12 =\n");
    printf("= -Ejercicio 6             -Ejercicio 13 =\n");
    printf("= -Ejercicio 7             -Ejercicio 14 =\n");
    printf("==========================================\n");
    printf("\n\nOpcion: ");

    scanf("%i", &op);
    switch(op)

    {

    case 1:

        //Hacer una función que reciba como parámetro un arreglo de números enteros y permita que
        //el usuario ingrese valores al mismo por teclado. La función debe retornar la cantidad de
        //elementos cargados en el arreglo (o pueden utilizar como puntero válidos)

        cantidad = cargarArreglo(arreglo);

        break;

    case 2:

        cantidad = cargarArreglo(arreglo);
        mostrarArreglo (arreglo, cantidad);

        break;

    case 3:

        cantidad = cargarArreglo(arreglo);
        mostrarArreglo (arreglo, cantidad);
        sumaArreglo (arreglo, cantidad);

        suma = sumaArreglo (arreglo, cantidad);

        printf(" el resultado es: %d", suma);

        break;

    case 4:

        cantidad = cargarArreglo(arreglo);
        cargarPila (arreglo, cantidad, &pila1);
        mostrarArreglo(arreglo, cantidad);
        mostrar(&pila1);
        break;


    case 5:

        break;

    case 6:

        break;

    case 7:

        break;

    case 8:

        break;

    case 9:

        break;

    case 10:

        break;

    case 11:

        break;

    case 12:

        break;

    case 13:

        break;
    }


}


int cargarArreglo(int a[])
{

    char eleccion = 's';
    int i = 0;

    while (eleccion == 's')
    {

        printf("Ingresa un valor a tu arreglo\n");
        fflush(stdin);
        scanf("%i", &a[i]);

        printf("Desea seguir cargando el arrelo?\n");
        fflush(stdin);
        scanf("%c", &eleccion);

        if (i >= 99)
        {

            printf("Error");
            eleccion = 'n';
        }

        i++;


    }
    return i;
}


void mostrarArreglo(int a[], int validos)
{

    int i = 0;
    printf("El contenido del arreglo es: ");
    while(i< validos)
    {

        printf("| %d |", a[i]);
        i++;

    }

}

int sumaArreglo (int a[], int validos)
{

    int i = 0;
    int suma = 0;
    while (i<validos)
    {

        suma = suma + a[i];
        i++;
    }

    return suma;
}


void cargarPila (int a[],int validos, Pila *pila)
{

    int i = 0;

    while (i < validos)
    {

        apilar(pila, a[i]);
        i++;
    }

}







