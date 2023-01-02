//Invertir una cadena - Función strrev()

#include<iostream>
#include<string.h>

int main()
{
	system("CLS");

	char cad[] = "Juan Fernando";

	strrev(cad);

	std::cout << cad << std::endl;

	system("pause");
	return 0;
}