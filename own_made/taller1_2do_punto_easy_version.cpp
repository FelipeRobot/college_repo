/*
Fecha: 21/02/23
Autor: Felipe Useche
Tema: Apuntadores y estructuras.
    Solución taller 01. Segundo punto. Versión fácil.
    Anotación:  Este programa está limitado a 10 usuarios para la estructura. 

*/



#include<iostream>
#include<fstream>

using namespace std;

const int max_char =30;// esta constante será usada para delimitar el número de caracteres cuando se capture el nombre

//Estructura que almacenará el nombre, edad e identificación de cada cliente.
struct info_clientes{
    
    char client_name[30];
    int client_age;
    int client_id;

}cliente[10];

int capture_client(){ //Capturará los datos de los clientes: nombre, edad, identificación

    int aux_client;

    cout<<"De cuántos clientes desea tomar tados? \n";
    cin>> aux_client;

    for(int i = 0; i< aux_client; i++){

        cout<<"Ingrese el nombre del cliente "<< i+1<< ": "<<endl;
        //cin.getline(cliente[i].client_name, max_char);
        cin>> cliente[i].client_name;
        cout<<"Ingrese la edad del cliente "<< i+1<< ": "<<endl;
        cin>> cliente[i].client_age;
        
        cout<<"Ingrese la identificación del cliente "<< i+1<< ": "<<endl;
        cin>> cliente[i].client_id;
        
    }
    cout<<"Los datos se guardaron exitosamente. Escrbiendo en archivo"<< endl;

    return aux_client;
}
//La función se encargará de abrir y escribir los datos en un archivo de texto
void archive_manegement(int n){ //N se usará para escrbir todos los datos que el usuario guradó.

    //creación de apuntadores.

    info_clientes *p_cliente[10]; 

    //inicialización de apuntadores
    for(int i = 0; i < n; i++){ 

        p_cliente[i] = &cliente[i];
    }

    ofstream out_archive; //creación flujo

    out_archive.open("facturaClientes.txt",ios::app|ios::out);

    //Escritura de datos
    if(out_archive.is_open()){

        for(int i =0; i<n; i++){

            out_archive<< "cliente "<< i+1 <<": "<<endl;
            out_archive<<"nombre: "<< p_cliente[i]->client_name <<endl;
            out_archive<<"edad: "<< p_cliente[i]->client_age <<endl;
            out_archive<<"Identificación: "<< p_cliente[i]->client_id <<endl;
        }


    }
    //Mensaje confirmación de finalización del proceso
    cout<<"El archivo se ha creado exitosamente."<<endl;

    out_archive.close();
    delete p_cliente;
}



int main(){

    int flag = capture_client();

    archive_manegement(flag);



    return 0;
}