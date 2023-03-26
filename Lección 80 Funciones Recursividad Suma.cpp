//

#include<iostream>
#include<stdlib.h>

int sumar(int);

int main()
{
	system("CLS");

	int nElementos;

	do {
		std::cout << "Digite el numero de elementos: "; std::cin >> nElementos;
	}while (nElementos <= 0);

	std::cout << "\nLa suma es: " << sumar(nElementos) << std::endl;

	system("pause");
	return 0;
}
//Funcion Recursiva

int sumar(int n)
{
	int suma = 0;

	if (n == 1)
	{
		suma = 1;
	}
	else
	{
		suma = n + sumar(n - 1);
	}
	return suma;
}