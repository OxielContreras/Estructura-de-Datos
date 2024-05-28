#include <iostream>
#include "Vectors.h"
using namespace std;

Vectors::Vectors() 
{
}

Vectors::~Vectors() 
{
}

void Vectors::set_n(int p)
{
    n = p;
} // Configura un valor desde el main

int Vectors::get_n()
{
    return n;
} // No recibe información, solo devuelve el valor

void Vectors::cargar(int rvec[], int p) // Recibe datos del main
{
    for (int i = 0; i < p; i++)
    {
        cout << "V[" << i + 1 << "] ";
        cin >> rvec[i];
    }
}

void Vectors::mostrar(const int rvec[]) const
{
    for (int i = 0; i < n; i++)
    {
        cout << "V[" << i + 1 << "] " << rvec[i] << endl;
    }
}

void Vectors::ordenar(int rvec[], int rvec2[]) const
{
    for (int i = 0; i < n; i++)
    {
        rvec2[i] = rvec[i];
    }
    
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = 0; j < n - 1 - i; j++) 
        {
            if (rvec2[j] < rvec2[j + 1])
            {
                int temp = rvec2[j];
                rvec2[j] = rvec2[j + 1];
                rvec2[j + 1] = temp;
            }
        }
    }
}

int Vectors::promedio(const int rvec[], int p) const
{
    int suma = 0;
    for (int i = 0; i < p; i++)
    {
        suma += rvec[i];
    }
    int prom = suma / p;
    return prom;
}