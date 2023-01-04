//Metodo de Ordenamiento por Inserción
//Juan Fernando Aispuro

#include<iostream>

int main()
{
	system("CLS");

	int numeros[] = { 4,2,3,1,5 };
	int i, pos, aux;

	for (i = 0; i < 5; i++)
	{
		pos = i;
		aux = numeros[i];

		while ((pos > 0) && (numeros[pos - 1] > aux))
		{
			numeros[pos] = numeros[pos - 1];
			pos--;
		}
		numeros[pos] = aux;
	}

	std::cout << "Orden Ascendente: ";
	for (i = 0; i < 5; i++)
	{
		std::cout << numeros[i] << " ";
	}

	std::cout << "Orden Descendente: ";
	for (i = 4; i >= 0; i--)
	{
		std::cout << numeros[i] << " ";
	}

	system("pause");
	return 0;
}