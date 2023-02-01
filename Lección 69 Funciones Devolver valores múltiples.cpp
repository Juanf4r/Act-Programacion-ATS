//Devolver valores multiples
//sumar y multiplicar 2 numeros

#include<iostream>
#include<stdlib.h>

void calcular(int, int, int&, int&);

int main()
{
	system("CLS");
	int num1, num2, suma = 0, producto = 0;

	std::cout << "Digite 2 numeros: "; std::cin >> num1 >> num2;
	//6 7 0 0
	calcular(num1,num2,suma,producto);

	std::cout << "El valor de la suma es: " << suma << std::endl;
	std::cout << "El valor del producto es: " << producto << std::endl;

	system("pause");
	return 0;
}

void calcular(int num1, int num2, int& suma, int& producto)
{
	suma = num1 + num2;
	producto = num1 * num2;
}