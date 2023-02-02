/*Ejercicio 13: Realiza una función que tome como parametros un vector de números y su
tamaño y cambie el signo de los elementos del vector. */

#include<iostream>
#include<stdlib.h>

void PedirDatos();
void CambiarSigno(int vec[], int);
void MostrarArreglo(int vec[], int);
int  vec[100], tam = 0;

int main()
{
	system("CLS");

	PedirDatos();
	CambiarSigno(vec, tam);
	MostrarArreglo(vec, tam);

	system("pause");
	return 0;
}

void PedirDatos()
{
	std::cout << "Digite el tamano del arreglo: "; std::cin >> tam;

	for (int i = 0; i < tam; i++)
	{
		std::cout << i + 1 << ". Digite un numero: "; std::cin >> vec[i];
	}
}

void CambiarSigno(int vec[], int tam)
{
	for (int i = 0; i < tam; i++)
	{
		vec[i] *= -1; //vec[i] = vec[i] * -1
	}
}

void MostrarArreglo(int vec[], int tam)
{
	std::cout << "\n--------------RESULTADO--------------\n\n";
	for (int i = 0; i < tam; i++)
	{
		std::cout << vec[i] << " \n";
	}
	std::cout << "\n";
}