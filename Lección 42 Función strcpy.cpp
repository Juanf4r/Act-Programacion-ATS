//Copiar el contendo de una cadena a otra -Funcion strcpy()

#include<iostream>
#include<stdlib.h>
#include<string.h>

int main()
{
	char nombre[] = "Juan Fernando";
	char nombre2[20];

	strcpy_s(nombre2,nombre);

	std::cout << nombre2 << "\n";


	system("pause");
	return 0;
}