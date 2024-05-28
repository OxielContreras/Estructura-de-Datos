#pragma once
#define MAX 10

class Vectors
{
private:
    int n;
    int vec[MAX];

public:
    Vectors();
    ~Vectors();

    void set_n(int p); // Establece un valor desde el main
    int get_n() const; // Devuelve el valor de n

    void cargar(int rvec[], int p); // Recibe datos del main
    void mostrar(const int rvec[]) const; // Muestra los valores del vector
    void ordenar(int rvec[], int rvec2[]) const; // Ordena el vector
    int promedio(const int rvec[], int p) const; // Calcula el promedio
};