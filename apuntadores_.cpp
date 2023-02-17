/*
AUTOR: Felipe Useche
FECHA: 14/02/2023
TEMA: Apuntadores
*/


#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

int main()
{
//Crear variables y asignar valores
int variable_X = 27;

//Modificar la semilla de los numeros aleatorios

srand(time(NULL));

//Declarar el puntero

int *Puntero;

//Se señala el puntero a la dirección de la variables

Puntero = &variable_X;

//Se imprime el valor del puntero

cout<<*Puntero<<endl;

//Se muestra el valor de X

/////////////////////////////

/*
Vector tipo float tamaño 3. Se quiere imprimir las direcciones
de memoria de los tres valores. Adicional se quiere presentar la dirección
de la memoria usando punteros
*/

//Declarar el arreglo de tamaño 3 y variables

float Vector[3];


//Opcional, llenar el arreglo

for(int i = 0; i<3; i++){
Vector[i] = 1+rand()%10;
}

//Imprimir las direcciones de cada valor del arreglo

for(int i = 0; i<3; i++){
cout<<&Vector[i]<<endl;
}

//Se crea y se apunta el puntero al vector

float *Pointer;

//Crear y apuntar el Puntero
float *Punt = Vector;
for(int i = 0; i<3; i++){
cout<<"Direccion del puntero: "<<Punt + i<<endl;
}
//se guardan los valores de cada posicion y no requiere de una actualización constante
return 0;
}
