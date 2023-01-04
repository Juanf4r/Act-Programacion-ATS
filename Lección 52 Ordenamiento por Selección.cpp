//Ordenamiento por Selección
//Juan Fernando Aispuro

#include<iostream>

int main()
{
	system("CLS");

	int numeros[] = { 3,2,1,5,4 };
	int i, j, aux, min;

	//ALGORITMO DE ORDENAMIENTO POR SELECCION
	for (i = 0; i < 5; i++)
	{
		min = i;
		for (j = i + 1; j < 5; j++)
		{
			if (numeros[j] < numeros[min])
			{
				min = j;
			}
		}
		aux = numeros[i];
		numeros[i] = numeros[min];
		numeros[min] = aux;
	}

	std::cout << "ORDEN ASCENDENTE: ";
	for (i = 0; i < 5; i++)
	{
		std::cout << numeros[i] << " ";
	}

	system("pause");
	return 0;
}