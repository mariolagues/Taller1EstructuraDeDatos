#pragma once
#include "NodoCancion.h"

class ListaCanciones {
private:
    NodoCancion* primero;
    NodoCancion* ultimo;
    int cantidad;

public:
    ListaCanciones();
    ~ListaCanciones();

    bool estaVacia();
    int getCantidad();

    void agregarFinal(Cancion cancion);
    void mostrar();

    Cancion obtenerPorPosicion(int posicion);
    Cancion obtenerPrimero();

    void eliminarPrimero();
    void eliminarPorPosicion(int posicion);
    void vaciar();
};