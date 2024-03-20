#include "Matriz.h"
#include <iostream>
using namespace std;

	Matriz::Matriz() {

}
	Matriz::~Matriz() {

}
	int Matriz:: get_fila() {
	return fil;
}
	void Matriz::set_fila(int FILAS){
		fil = FILAS;
	}
	int Matriz::get_col(){
		return col;
	}
	int Matriz::set_col(int COLUMNAS){
		col = COLUMNAS;
	}
	void Matriz::mostrarmat(int MAT[MAX][MAX], int m, int n) {
		for (int i = 0; i < fil; i++)
		{
			for (int j = 0; j < col; j++) {
				cout << MAT[i][j] << "\t";
			}
			cout << endl;
		}
	}

	void Matriz:: cargarmat(int MAT[MAX][MAX], int m, int n) {
		for (int i = 0; i < fil; i++)
			for (int j = 0; j < col; j++) {
				cout << "MAT[" << i << "][" << j << "]= ";
				cin >> MAT[i][j];
			}
	}

	float Matriz:: promedio(int MAT[MAX][MAX], int m, int n) {
		float prom, s = 0;
		for (int i = 0; i < m; i++)
			for (int j = 0; j < n; j++)
				s = s + MAT[i][j];
		prom = s / (m * n);
		return prom;
	}

	int Matriz:: mayor(int MAT[MAX][MAX], int m, int n) {
		int may = MAT[0][0];
		for (int i = 0; i < m; i++)
			for (int j = 0; j < n; j++)
				if (MAT[i][j] > may)
					may = MAT[i][j];
		return may;
	}
	void Matriz::sumarmat(int MAT[MAX][MAX], int MAT2[MAX][MAX], MAT3[MAX], [MAX]) {
		int i = 0;
		for (int i = 0; i < fil; i++) {
			for (int j = 0; j < col; j++) {
				MAT3[i][j] = MAT[i][j] + MAT2[i][j];
			}
		}
	}
