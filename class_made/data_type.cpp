/*
Autor: Felipe Useche
Fecha: 14/02/2023
Tema: Tipos, variables y constante en C++.

Ejercicio sobre los tipos fundamentales en datos "Primitivos" de C++
*/

#include<iostream>

using namespace std;

int main()
{
//Se crea el mensaje de bienvenida al usuario
cout<<"----------------------------------------------"<<endl;
cout<<"------------- TIPOS DE DATOS C++ -------------"<<endl;
cout<<"----------------------------------------------"<<endl;
cout<<endl;
cout<<"------------- NUMERO DE BYTES ----------------"<<endl;

//se muestra el tipo de dato y el número de bytes.
cout<<"-> Char: "<<sizeof(char)<<endl;
cout<<"-> Short: "<<sizeof(short)<<endl;
cout<<"-> Int: "<<sizeof(int)<<endl;
cout<<"-> Long: "<<sizeof(long)<<endl;
cout<<"-> Float: "<<sizeof(float)<<endl;
cout<<"-> Double: "<<sizeof(double)<<endl;
cout<<"-> Long Double: "<<sizeof(long double)<<endl;


return 0;
}
