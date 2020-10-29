#include <iostream>
#include <cstdlib>
#include "arreglo.h"
using namespace std;

int main(){
    ArregloDinamico a;

    a.insertar_final("que");
    a.insertar_final("tal?");
    a.insertar_final("soy");
    a.insertar_final("tu");
    a.insertar_final("computadora");
    a.insertar_final("en que");
    a.insertar_final("puedo");
    a.insertar_final("ayudar?");

    a.insertar_inicio("Ulises");
    a.insertar_inicio("Hola!!!");


    for (size_t i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }




    return 0;
}