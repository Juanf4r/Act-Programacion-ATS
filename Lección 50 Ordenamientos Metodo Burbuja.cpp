//Ordenamiento Metodo Burbuja
//Juan Fernando Aispuro

#include<iostream>

int main()
{
	system("CLS");

	int numeros[] = { 4,1,2,3,5 };
	int i, j, aux;
	
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (numeros[j] > numeros[j + 1])
			{
				aux = numeros[j];
				numeros[j] = numeros[j + 1];
				numeros[j + 1] = aux;
			}
		}
	}

	std::cout << "Orden Ascendente: ";
	for (i = 0; i < 5; i++) 
	{
		std::cout << numeros[i]<<" ";
	}

	system("pause");
	return 0;
}