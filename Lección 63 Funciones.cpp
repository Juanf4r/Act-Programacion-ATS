//Lección 63 Funciones Primera vez

#include<iostream>
#include<stdlib.h>

//Prototipo de Funcion
int encontrarMax(int x, int y);

int main()
{
	system("CLS");
	int n1, n2, mayor = 0;

	std::cout << "Digite 2 numeros: "; std::cin >> n1 >> n2;

	mayor = encontrarMax(n1, n2);

	std::cout << "El numero mayor es: "<< mayor <<"\n";

	system("pause");
	return 0;
}

//Definicion de Funcion
int encontrarMax(int x, int y)
{
	int NumMax;

	if (x > y)
	{
		NumMax = x;
	}
	else
	{
		NumMax = y;
	}
	return NumMax;
}