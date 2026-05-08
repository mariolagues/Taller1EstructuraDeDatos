#pragma once
#include "ListaCanciones.h"
#include <string>
using namespace std;

class ArchivoMusica {
public:
    static void cargarCanciones(string nombreArchivo, ListaCanciones& lista);
};