#ifndef ARREGLODINAMICO_H
#define ARREGLODINAMICO_H

#include <iostream>
using namespace std;


class ArregloDinamico
{
    string *arreglo;
    size_t tam;
    size_t cont;
    const static size_t MAX = 5;

public:
    ArregloDinamico();
    ~ArregloDinamico();
    void insertar_final(const string &s);
    void insertar_inicio(const string &s);

private:
    void expandir();
};





#endif