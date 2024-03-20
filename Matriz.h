#pragma once
#define MAX 10
class Matriz
{
	private:
		int fil, col;
		int MAT[MAX][MAX], MAT2[MAX][MAX], MAT3[MAX][MAX];
	public:
		Matriz();
		~Matriz();
		int get_fila();
		void set_fila(int FILAS);
		int get_col();
		int set_col(int COLUMNAS);
		void mostrarmat(int MAT[MAX][MAX], int m, int n);
		void cargarmat(int MAT[MAX][MAX], int m, int n);
		float promedio(int MAT[MAX][MAX], int m, int n);
		int mayor(int MAT[MAX][MAX], int m, int n);
		void sumarmat(int MAT[MAX][MAX], int MAT2[MAX][MAX], MAT3[MAX], [MAX]);
