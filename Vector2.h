#pragma once
#define MAX 10
class Vector
{
	private:
		int vec[MAX];
		int n;
	public:
		Vector();
		~Vector();
		void set_n(int n);
		int get_n();
		void cargar(int _n, int _vec[]); //_vec[] solo trabaja para la funcion cargar y no es parte del int vec[] del private.
		int mostrar(int _vec[]);
		void ordenar(int _vec[], int _vec2[]);
		int promedio(int _vec[], int n);
};
