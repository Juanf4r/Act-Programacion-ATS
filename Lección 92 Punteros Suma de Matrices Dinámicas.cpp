/*Realice un programa que calcule la suma de dos matrices dinámicas. */

#include<iostream>
#include<cstdlib>

int** puntero_matriz1, ** puntero_matriz2, nFilas = 0, nCol = 0;

void pedirDatos()
{
	std:: cout << "Digite el numero de filas: "; std::cin >> nFilas;
	std:: cout << "Digite el numero de columnas: "; std::cin >> nCol;

	puntero_matriz1 = new int* [nFilas];
	for (int i = 0; i < nFilas; i++)
	{
		puntero_matriz1[i] = new int [nCol];
	}

	std::cout << "Digite los elementos de la primera matriz: \n";
	for (int i = 0; i < nFilas; i++)
	{
		for (int j = 0; j < nCol; j++)
		{
			std::cout << "Digite un numero[" << i << "][" << j << "]: "; 
			std::cin >> *(*(puntero_matriz1 + i) + j);
		}
	}

	std::cout << "Digite los elementos de la segunda matriz: \n";
	for (int i = 0; i < nFilas; i++)
	{
		for (int j = 0; j < nCol; j++)
		{
			std::cout << "Digite un numero[" << i << "][" << j << "]: ";
			std::cin >> *(*(puntero_matriz2 + i) + j);
		}
	}
}

void sumarMatrices(int **puntero_matriz1,int**puntero_matriz2,int nFilas, int nCol)
{
	for (int i = 0; i < nFilas; i++)
	{
		for (int j = 0; j < nCol; j++)
		{
			*(*(puntero_matriz1 + i) + j) += *(*(puntero_matriz2 + i) + j);
		}
	}
}

void mostrarMatrizResultante(int** puntero_matriz1, int nFilas, int nCol)
{
	std::cout << "\nLa suma de las 2 matrices es: \n";
	for (int i = 0; i < nFilas; i++)
	{
		for (int j = 0; j < nCol; j++)
		{
			std::cout << *(*(puntero_matriz1 + i) + j) << " "; //puntero_matriz1[i][j]
		}
		std::cout << "\n";
	}
	std::cout << "\n";
}

int main()
{
	system("CLS");

	pedirDatos();
	sumarMatrices(puntero_matriz1,puntero_matriz2,nFilas,nCol);
	mostrarMatrizResultante(puntero_matriz1, nFilas, nCol);

	for (int i = 0; i < nFilas; i++)
	{
		delete[] puntero_matriz1[i];
	}
	delete[] puntero_matriz1;

	for (int i = 0; i < nFilas; i++)
	{
		delete[] puntero_matriz2[i];
	}
	delete[] puntero_matriz2;

	system("pause");
	return 0;
}