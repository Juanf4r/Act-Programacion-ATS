//Comparar cadenas - Funcion strcmp()

#include<iostream>
#include<stdlib.h>
#include<string.h>

int main()
{
	char palabra1[] = "Hola";
	char palabra2[] = "Hola";

	if (strcmp(palabra1, palabra2) == 0) //==0 significa que sean iguales
										 //==1 o !0 ==significa que sean diferentes
	{
		std::cout << "Ambas cadenas son iguales\n";
	}
	else
	{
		std::cout << "Ambas cadenas no son iguales\n";
	}

	system("pause");
	return 0;
}