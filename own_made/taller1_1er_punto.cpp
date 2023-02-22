/*
Fecha: 17/02/23
Autor: Felipe Useche
Tema: Apuntadores y estructuras.
    Solución taller 01.

*/
#include<iostream>
#include<cstdlib>
#include <ctime>

using namespace std;

//crear una función para generar números aleatorios entre 0 y 25.

int rand_num(){

    int random_num = rand() %26;

    /*Se hace uso de la librería <cstdlib> para la generación de números pseudo aleatorios
            "rand() %26" Generará un número aleatorio entre 0 y 25.
    */
    return random_num;
}

int main(){
    // Inicializar el generador de números aleatorios con la hora actual como semilla
   srand((unsigned) time(NULL));

    // Crear un array con 10 elementos.
    int arr1[10]={};
    //llenar el arreglo
    for(int i =0; i < 10; i++){
        
        arr1[i] = rand_num();
    }

    //crear un puntero.

    int* flag= arr1;

    //Imprimir el arreglo haciéndo uso del puntero.

    for(int k =0; k<10;k++){
        cout<< *flag << ",";
        flag++;

    }


    return 0;
}
