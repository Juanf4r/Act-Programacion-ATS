/*Matrices Dinamicas

Ejemplo: Rellenar una matriz de NxM y mostrar su contenido

**puntero_matriz  ->   *puntero_fila  -> [int] [int]
					   *puntero_fila  -> [int] [int]
					   *puntero_fila  -> [int] [int]
*/

#include<iostream>
#include<cstdlib>

int** puntero_matriz;
int nFilas, nCol;

void pedirDatos()
{
	std::cout << "Digite el numero de filas: "; std::cin >> nFilas;
	std::cout << "Digite el numero de columnas: "; std::cin >> nCol; std::cout << "\n";

	//Reservar memoria para la matriz dinamica
	puntero_matriz = new int *[nFilas]; //Reservando memoria para las filas
	for (int i = 0; i < nFilas; i++)
	{
		puntero_matriz[i] = new int [nCol];
	}

	std::cout << "Digitando elementos de la matriz: \n";
	for (int i = 0; i < nFilas; i++)
	{
		for (int j = 0; j < nCol; j++)
		{
			std::cout << "Digite un numero[" << i << "][" << j << "]: ";
			std::cin >> *(*(puntero_matriz + i)+j); //puntero_matriz[i][j] =  *(*(puntero_matriz + i)+j)
		}
	}
}

void mostrarMatriz(int **puntero_matriz,int nFilas, int nCol)
{
	std::cout << "\n\nImprimiendo Matriz: \n\n";
	for (int i = 0; i < nFilas; i++)
	{
		for (int j = 0; j < nCol; j++)
		{
			std::cout << * (*(puntero_matriz + i) + j);
		}
		std::cout << "\n";
	}
	std::cout << "\n";
}

int main()
{
	system("CLS");

	pedirDatos();
	mostrarMatriz(puntero_matriz, nFilas, nCol);

	//Liberar la memoria
	for (int i = 0; i < nFilas; i++)
	{
		delete[] puntero_matriz[i];
	}

	delete[] puntero_matriz;

	system("pause");
	return 0;
}