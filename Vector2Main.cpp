// claseVector.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "Vector.h"
#define MAX 100
using namespace std;

int main()
{   
    int tamanio, v[MAX];
    Vector vector1;//Declarar un objeto, o instancia e la clase
    cout << " Ingresar el numero de elementos: " << endl;
    //Validando la entrad. barbage in barbage out
    do {
        cin >> tamanio;
    } while (tamanio > MAX || tamanio < 0);
    //Quiero cambiarle los metodos de la clase
    vector1.set_n(tamanio);//esto cambia el valor atributo de la calse Vector.
    vector1.cargar(tamanio, v);
    vector1.mostrar(v);

}
