/*Recursividad con Potencias */

#include<iostream>
#include<stdlib.h>

int potencia(int, int);

int main()
{
	int base = 0, exponente = 0;

	system("CLS");

	std::cout << "Digite la base: "; std::cin >> base;
	std::cout << "Digite el exponente: "; std::cin >> exponente;

	std::cout << "\nPotencia de " << base << " elevado a " << exponente << " es: "; 
	std::cout << potencia(base, exponente) << "\n";

	system("pause");
	return 0;
}

int potencia(int x, int y)
{
	int pot;

	if (y == 1)
	{
		pot = x;
	}
	else
	{
		pot = x * potencia(x, y - 1);
	}
	return pot;
}