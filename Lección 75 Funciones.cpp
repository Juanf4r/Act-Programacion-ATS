/*Paso de parametros tipo Matriz

Elevar al cuadrado todos los elementos de una matriz. */

#include<iostream>
#include<stdlib.h>

void mostrarMatriz(int m[][3], int, int);
void CalcularCuadrado(int m[][3], int, int);
void mostrarMatrizElv(int m[][3], int, int);

int main()
{
	system("CLS");
	const int NFILAS = 2;
	const int NCOL = 3;
	int m[NFILAS][NCOL] = { {1,2,3},{4,5,6} };
	mostrarMatriz(m, NFILAS, NCOL);
	CalcularCuadrado(m, NFILAS, NCOL);
	mostrarMatrizElv(m, NFILAS, NCOL);

	system("pause");
	return 0;
}

void mostrarMatriz(int m[][3], int NFILAS, int NCOL) 
{
	std::cout << "Mostrando Matriz original: \n";
	for (int i = 0; i < NFILAS; i++)
	{
		for (int j = 0; j < NCOL; j++)
		{
			std::cout << m[i][j] << " ";
		}
		std::cout << "\n";
	}
	std::cout << "\n";
}

void CalcularCuadrado(int m[][3], int NFILAS, int NCOL)
{
	for (int i = 0; i < NFILAS; i++)
	{
		for (int j = 0; j < NCOL; j++)
		{
			m[i][j] *= m[i][j];
		}
	}
}

void mostrarMatrizElv(int m[][3], int NFILAS, int NCOL)
{
	std::cout << "Mostrando Matriz nueva: \n";
	for (int i = 0; i < NFILAS; i++)
	{
		for (int j = 0; j < NCOL; j++)
		{
			std::cout << m[i][j] << " ";
		}
		std::cout << "\n";
	}
	std::cout << "\n";
}