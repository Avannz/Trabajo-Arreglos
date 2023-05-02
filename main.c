#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

int cargarArreglo(int a[]);
void mostrarArreglo(int a[], int validos);
int sumaArreglo (int a[], int validos);
void cargarPila (int a[],int validos, Pila *pila);
float cargarArreglo2(float a[]);
float sumaArreglo2 (float a[], int validos);
int busqueda (int a[], int validos, int dato);
int cargarArreglo3(char a[]);
int insertarChar (char a[], int validos, char dato);
char mostrarArreglo2(char a[], int validos);
int insertarChar (char a[], int validos, char dato);
void capicua (int a[], int validos);
void intercambiar(int a[], int validos);
void ordenamientoSeleccion (int arreglo[], int validos);
int posicionMenor (int arreglo[], int posInicioBusqueda, int validos);

int main()
{
    int arreglo[6];
    float arregloreal [100];
    float total = 0;
    char arreglocar [100];
    int cantidad = 0;
    int suma = 0;
    int op;
    int i = 0;
    int validos;
    int dato;
    char total2;


    Pila pila1;
    inicpila(&pila1);

    printf("==========================================\n");
    printf("=               TP ARREGLOS              =\n");
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

        printf("\nLA CANT DE VALIDOS EN EL ARREGLO ES DE : %i", cantidad);

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

    validos = cargarArreglo2(arregloreal);

    total = sumaArreglo2(arregloreal, validos);

    printf("La suma total del arreglo es: %.2f", total);

        break;

    case 6:

        cargarArreglo(arreglo);

        printf("Ingresa el dato que quieres buscar ");
        scanf("%d", &dato);

        dato = busqueda(arreglo, validos, &dato);

        if (dato = 1)
        {
            printf("El dato se encuentra en el arreglo ");
        }else{

        printf("El dato no se encuentra en el arreglo ");

        }



        break;

    case 7:

        validos = cargarArreglo3(arreglocar);
        printf("Que dato desea ingresar a el arreglo");
        fflush(stdin);
        scanf("%c", &dato);

        total2 = insertarChar(arreglocar, validos, dato);

        mostrarArreglo2(arreglocar, total2);
        break;

    case 8:

        cantidad = cargarArreglo3(arreglocar);
        total2 = buscarMayorC(arreglocar, cantidad);

        printf("La posicion del mayor caracter es: %d", total2);
        printf("El valor es: %c", arreglocar[total2]);

        break;

    case 9:
            cantidad = cargarArreglo(arreglo);
            capicua(arreglo, cantidad);

        break;

    case 10:

        cantidad = cargarArreglo(arreglo);
        intercambiar(arreglo, cantidad);

        mostrarArreglo(arreglo, cantidad);

        break;

    case 11:

        cantidad = cargarArreglo(arreglo);
        ordenamientoSeleccion(arreglo, cantidad);

        mostrarArreglo(arreglo, cantidad);

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

float cargarArreglo2(float a[])
{

    char eleccion = 's';
    int i = 0;

    while (eleccion == 's')
    {

        printf("Ingresa un valor a tu arreglo\n");
        fflush(stdin);
        scanf("%f", &a[i]);

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

float sumaArreglo2 (float a[], int validos)
{

    int i = 0;
    float suma = 0;
    while (i<validos)
    {

        suma = suma + a[i];
        i++;
    }

    return suma;
}

int busqueda (int a[], int validos, int dato ){

    int i = 0;
    int flag = 0;
    while(i < validos && flag == 0){

        if (a[i] == dato){

            flag = 1;

        }else{

            flag = 0;

        }
      i++;

    }

    return flag;
}

int cargarArreglo3(char a[])
{

    char eleccion = 's';
    int i = 0;

    while (eleccion == 's')
    {

        printf("Ingresa un valor a tu arreglo\n");
        fflush(stdin);
        scanf("%c", &a[i]);

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

int insertarChar (char a[], int validos, char dato){

    int i;
i=validos-1;

while (i>=0 && dato<a[i]){

    a[i+1] = a[i];
    i--;

}

a[i+1] = dato;

return validos+1;
    }
char mostrarArreglo2(char a[], int validos)
{

    int i = 0;
    printf("El contenido del arreglo es: ");
    while(i< validos)
    {

        printf("| %c |", a[i]);
        i++;

    }

}


int buscarMayorC (char a[], int validos){

    int i = 1;
    char mayor = a[0];
    int posmayor = 0;

    for (i = 0; i<validos; i++){

        if(a[i] > mayor){

          mayor = a[i];
          posmayor = i;

        }


    }
 return posmayor;
}

void capicua (int a[], int validos){

    int i = 0;
    int j = validos-1;

    int flag = 0;


    for(i=0;i<validos;i++){

        if (i==j){

            j++;
            //i++;
            flag = 1;

        }else{

            flag = 0;


        }

    }

    if (flag = 1){

            printf("Es capicua");

        }else{

            printf("No es capicuaaaaaaaa");

        }

}

void intercambiar(int a[], int validos){

    int i = validos-1;
    int aux;

    while (i>=0){

      printf("| %d |", a[i]);
      i--;
    }

}

void ordenamientoSeleccion (int arreglo[], int validos){

    int posmenor;
    int aux;
    int i = 0;

    while(i<validos){

        posmenor = posicionMenor(arreglo,i, validos);
        aux = arreglo[posmenor];
        arreglo[posmenor] = arreglo[i];
        arreglo[i] = aux;

        i++;

    }
}

int posicionMenor (int arreglo[], int posInicioBusqueda, int validos){

        int menor = arreglo[posInicioBusqueda
        ];
        int posmenor = posInicioBusqueda;
        int i = posInicioBusqueda + 1;
        while ( i < validos){

            if(menor > arreglo[i]){

                menor = arreglo[i];
                posmenor = i;
            }

            i++;

        }

        return posmenor;
    }
