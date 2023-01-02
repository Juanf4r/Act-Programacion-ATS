//Pasar una palabra a minusculas - Función strlwr()

#include<iostream>
#include<string.h>

int main()
{
	system("CLS");

	char palabra[] = "LECCION PROGRAMACION";

	_strlwr_s(palabra);

	std::cout << palabra << std::endl;

	system("pause");
	return 0;
}