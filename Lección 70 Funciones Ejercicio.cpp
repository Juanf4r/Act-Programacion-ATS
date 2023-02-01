// Intercambiar valores de 2 variables utilizando paso de parámetros por referencia.

#include<iostream>
#include<stdlib.h>

void intercambiar(int&, int&);

int main()
{
	system("CLS");
	int num1 = 10, num2 = 15;

	std::cout << "El valor de num1 es: " << num1 << std::endl;
	std::cout << "El valor de num2 es: " << num2 << std::endl;

	intercambiar(num1, num2);
	std::cout << "El nuevo valor de num1 es: " << num1 << std::endl;
	std::cout << "El nuevo valor de num1 es: " << num2 << std::endl;

	system("pause");
	return 0;
}

void intercambiar(int& num1, int& num2)
{
	int aux;

	aux = num1;
	num1 = num2;
	num2 = aux;
}