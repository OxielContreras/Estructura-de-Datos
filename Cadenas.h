#pragma once
#include <string>

using namespace std;

class Cadenas {
private:
    int longitud;
    string cadenas;

public:
    Cadenas();
    ~Cadenas();
    string getCadenas() const;
    void setCadenas(const string& car);
    int tamanio() const;
    string invertir(const string& nom);
    string quitarVocal(const string& nom);
    //void palindromo(const string& car);
    int comparar(const string& otraCadena) const;
    int contarVocales() const;
};
