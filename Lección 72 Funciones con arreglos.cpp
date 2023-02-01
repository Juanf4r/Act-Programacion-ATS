/* Paso de parametros de tipo vector

Parametros de la función: 
	void nombreDeFuncion(tipo nombreArreglo[], int tamañoArreglo)
	
Llamada a la función
	nombreDeFuncion(nombreArreglo, tamañoArreglo)
*/

//Cuadrados de los elementos del vector

#include<iostream>
#include<stdlib.h>

void cuadrado(int vec[], int);
void Muestra(int vec[], int);

int main()
{
	system("CLS");
	const int TAM = 5;
	int vec[TAM] = { 1,2,3,4,5 };
	cuadrado(vec, TAM);
	Muestra(vec, TAM);
	
	system("pause");
	return 0;
}

void cuadrado(int vec[], int tam)
{
	for (int i = 0; i < tam; i++)
	{
		vec[i] *= vec[i];
	}
}

void Muestra(int vec[], int tam)
{
	for (int i = 0; i < tam; i++)
	{
		std::cout << vec[i] << " ";
	}
	std::cout << "\n";
}