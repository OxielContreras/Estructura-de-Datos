#include "Cadenas.h"
#include <algorithm>

Cadenas::Cadenas() : longitud(0) {}

Cadenas::~Cadenas() {}

string Cadenas::getCadenas() const {
    return cadenas;
}

void Cadenas::setCadenas(const string& car) {
    cadenas = car;
    longitud = cadenas.length();
}

int Cadenas::tamanio() const {
    return longitud;
}

string Cadenas::invertir(const string& nom) {
    string invertida = nom;
    reverse(invertida.begin(), invertida.end());
    return invertida;
}

string Cadenas::quitarVocal(const string& nom) {
    string resultado;
    for (char c : nom) {
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u')
            resultado += c;
    }
    return resultado;
}

int Cadenas::comparar(const string& otraCadena) const {
    return cadenas.compare(otraCadena);
}

int Cadenas::contarVocales() const {
    int contador = 0;
    for (char c : cadenas) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            contador++;
    }
    return contador;
}
