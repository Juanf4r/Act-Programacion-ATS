/*Ejercicio 11: Realice una función que tome como parámetros un vector de números enteros y devuelve la suma
de sus elementos. */

#include<iostream>
#include<stdlib.h>

void pedirDatos();
int calcularSuma(int vec[], int);
int vec[100], tam;


int main()
{
	system("CLS");
	pedirDatos();

	std::cout << "La suma de los elementos del arreglo es: " << calcularSuma(vec, tam) << "\n\n";

	system("pause");
	return 0;
}

void pedirDatos()
{
	std::cout << "Digite el numero de elementos del vector: "; std::cin >> tam;

	for(int i=0;i<tam;i++)
	{
		std::cout << i + 1 << ". Digite un numero: "; std::cin >> vec[i];
	}
}

int calcularSuma(int vec[], int)
{
	int suma = 0;

	for (int i = 0; i < tam; i++)
	{
		suma += vec[i];
	}
	return suma;
}