//Busqueda Binaria

#include<iostream>

int main()
{
	system("CLS");

	int numeros[] = { 1,2,3,4,5 };
	int inf, sup, mitad, dato;
	char band = 'F';

	dato = 1;

	//Algoritmo de la Busqueda Binaria

	inf = 0;
	sup = 5;

	while (inf <= sup)
	{
		mitad = (inf + sup)/2;

		if (numeros[mitad] == dato)
		{
			band = 'V';
			break;
		}
		if (numeros[mitad] > dato)
		{
			sup = mitad;
			mitad = (inf + sup)/2;
		}
		if (numeros[mitad] < dato)
		{
			inf = mitad;
			mitad = (inf + sup)/2;
		}
	}

	if (band == 'V')
	{
		std::cout << "El numero ha sido encontrado! En la posicion " << mitad << "\n";
	}
	else
	{
		std::cout << "El numero no ha sido encontrado!\n";
	}

	system("pause");
	return 0;
}