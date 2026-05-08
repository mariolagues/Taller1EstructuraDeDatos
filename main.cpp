#include <iostream>
#include "ListaCanciones.h"
#include "ArchivoMusica.h"

using namespace std;

int main() {
    ListaCanciones canciones;

    ArchivoMusica::cargarCanciones("music_source.txt", canciones);

    cout << "Canciones registradas:" << endl;
    canciones.mostrar();

    cout << endl;
    cout << "Probando obtener por posicion:" << endl;

    Cancion c = canciones.obtenerPorPosicion(1);
    cout << c.toString() << endl;

    return 0;
}