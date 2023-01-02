//Pasar una palabara a MAYUSCULA - Función strupr()

#include<iostream>
#include<string.h>

int main()
{
	system("CLS");

	char nombre1[] = "Juan Fernando";
	char nombre2[] = "Juan Fernando";

	_strupr_s(nombre1);
	_strupr_s(nombre2);

	std::cout << nombre1 <<"\n";
	std::cout << nombre2 <<"\n";

	if (strcmp(nombre1,nombre2) == 0)
		{
			std::cout << "SON IGUALES\n";
		}
	else
		{
			std::cout << "NO SON IGUALES\n";
		}

	system("pause");
	return 0;
}