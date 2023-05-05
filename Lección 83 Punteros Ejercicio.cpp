/*Ejercicio 1: Comprobar si un número es par o impar, y señalar la posición de memoria
donde se está guardando el número. Con punteros. */

#include<iostream>
#include<stdlib.h>

int main()
{
	system("CLS");

	int numero,*dir_numero;

	std::cout << "Digite un numero: "; std::cin >> numero;

	dir_numero = &numero;

	if (*dir_numero%2==0)
	{
		std::cout << "El numero " << *dir_numero << " es par" << std::endl;
		std::cout << "Posicion: " << dir_numero << "\n\n";
	}
	else
	{
		std::cout << "El numero " << *dir_numero << " es impar" << std::endl;
		std::cout << "Posicion: " << dir_numero << "\n\n";
	}


	system("pause");
	return 0;
}