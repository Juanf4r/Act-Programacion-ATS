/*Ejercicio 3: Rellenar un array de 10 numeros, posteriormente utilizando punteros
indicar cuales son numeros pares y su posicion en memoria. */

#include<iostream>
#include<cstdlib>

int main()
{
	system("CLS");

	int numeros[10] = {}, * dir_numeros;

	for (int i = 0; i < 10; i++)
	{
		std::cout << "Digite un numero [" << i << "]: ";
		std::cin >> numeros[i];
;	}

	dir_numeros = numeros;

	for (int i = 0; i < 10; i++)
	{
		if (*dir_numeros % 2 == 0)
		{
			std::cout << "El numero " << *dir_numeros << " es par\n";
			std::cout << "Posicion " << dir_numeros << "\n";
		}
		dir_numeros++;
	}	std::cout << "\n";

	system("pause");
	return 0;
}