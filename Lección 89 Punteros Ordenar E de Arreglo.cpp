/*Pedir al usuario N números, almacenarlos en un arreglo dinámico posteriormente
ordenar los números en orden ascendente y mostrarlos en pantalla.
NOTA: Utilizar cualquier método de ordenamiento. */

#include<iostream>
#include<cstdlib>

int nElementos = 0, *elemento;

void pedirDatos()
{
	std::cout << "Digite el numero de elementos del Arreglo: "; std::cin >> nElementos;

	//Arreglo con Memoria Dinamica
	elemento = new int[nElementos];

	for (int i = 0; i < nElementos; i++)
	{
		std::cout << "Digite un numero[" << i << "]: "; std::cin >> *(elemento + i); //elemento[i] con punteros
	}
}

void ordenarArreglo(int *elemento,int nElementos)
{
	int aux;

	//Ordenar Arreglo con Metodo Burbuja con punteros
	for (int i = 0; i < nElementos; i++)
	{
		for (int j = 0; j < nElementos - 1; j++)
		{
			if (*(elemento + j) > *(elemento + j + 1))
			{
				aux = *(elemento + j);
				*(elemento + j) = *(elemento + j + 1);
				*(elemento + j + 1) = aux;
			}
		}
	}
}

void mostrarArreglo(int* elemento,int nElementos)
{
	std::cout << "\n\nMostrando Arreglo Ordenado: ";
	for (int i = 0; i < nElementos; i++)
	{
		std::cout << *(elemento + i)<<" "; //elemento[i] con punteros
	}
	std::cout << "\n";
}

int main()
{
	system("CLS");

	pedirDatos();
	ordenarArreglo(elemento, nElementos);
	mostrarArreglo(elemento, nElementos);
	delete[] elemento; //Liberar Memoria usada para el Arreglo

	system("pause");
	return 0;
}