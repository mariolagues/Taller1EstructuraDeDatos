cmake_minimum_required(VERSION 4.2)
project(Taller1)

set(CMAKE_CXX_STANDARD 20)

add_executable(Taller1 main.cpp
        Cancion.h
        Cancion.cpp
        NodoCancion.h
        NodoCancion.cpp
        ListaCanciones.h
        ListaCanciones.cpp
        ArchivoMusica.h
        ArchivoMusica.cpp)
