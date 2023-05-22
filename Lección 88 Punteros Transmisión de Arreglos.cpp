/*Transmisión de Arreglos

Ejemplo: Hallar el máximo elemento de un arreglo. */

#include<iostream>
#include<cstdlib>

int hallarMax(int* dirVec, int nElementos)
{
	int max = 0;

	for (int i = 0; i < nElementos; i++)
	{
		if (*(dirVec + i) > max)
		{
			max = *(dirVec + i);
		}
	}
	return max;
}

int main()
{
	system("CLS");

	const int nElementos = 5;
	int numeros[nElementos] = {80,5,1,8,50 };

	std::cout << "El mayor elemento es: " << hallarMax(numeros, nElementos) << "\n";

	system("pause");
	return 0;
}