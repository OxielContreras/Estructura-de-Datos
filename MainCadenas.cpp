#include "Cadenas.h"
#include <iostream>

using namespace std;

int main() {
    int opcion, pos;
    string texto, subtexto;
    Cadenas cadena;

    do {
        cout << "\tMenu" << endl;
        cout << "1.- Pedir string" << endl;
        cout << "2.- Longitud del string" << endl;
        cout << "3.- Invertir string" << endl;
        cout << "4.- Quitar vocales" << endl;
        cout << "5.- Verificar palíndromo" << endl;
        cout << "0.- Salir" << endl;
        cout << "Opción: "; cin >> opcion;

        switch (opcion) {
        case 1:
            cout << "Ingrese un texto: ";
            cin.ignore();
            getline(cin, texto);
            cadena.setCadenas(texto);
            break;
        case 2:
            cout << "La longitud es: " << cadena.tamanio() << endl;
            break;
        case 3:
            cout << "Texto invertido: " << cadena.invertir(texto) << endl;
            break;
        case 4:
            cout << "Texto sin vocales: " << cadena.quitarVocal(texto) << endl;
            break;
        case 5:
            // Implementación del palíndromo aquí.
            break;
        }

    } while (opcion != 0);

    return 0;
}
