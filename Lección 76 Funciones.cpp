/*EJercicio 15 Desarrrolar una función que determine si una matriz es simetrica o no.

Una matrriz es simeetrica: A = A^t

-La matriz debe ser cuadrada
-Aij = Aji */

#include<iostream>
#include<stdlib.h>

void pedirDatos();
void ComprobarSimetria(int m[][100],int,int);

int m[100][100], nfilas = 0, ncol = 0;

int main()
{
	system("CLS");

	void pedirDatos();
	void ComprobarSimetria(m, nfilas, ncol);

	system("pause");
	return 0;
}

void pedirDatos()
{
	std::cout << "Digite el numero de filas: "; std::cin >> nfilas;
	std::cout << "Digite el numero de columnas: "; std::cin >> ncol;

	for (int i = 0; i < nfilas; i++)
	{
		for (int j = 0; j < ncol; j++)
		{
			std::cout << "Digite un numero [" << i << "][" << j << "]: "; std::cin >> m[i][j];
		}
	}
}

void ComprobarSimetria(int m[][100], int nfilas, int ncol)
{
	int contador = 0;

	if (nfilas == ncol)
	{
		for (int i = 0; i < nfilas; i++)
		{
			for (int j = 0; j < ncol; j++)
			{
				if (m[i][j] == m[j][i]) 
				{
					contador++;
				}
			}
		}
	}

	if (contador == nfilas * ncol)
	{
		std::cout << "La Matriz es Simetrica \n";
	}
	else
	{
		std::cout << "La Matriz no es Simetrica \n";
	}
}