//Transformar una cadena a numeros

#include<iostream>
#include<stdlib.h>

int main()
{
	char cad1[] = "123";
	char cad2[] = "123.456";
	int numero1 = 0;
	float numero2 = 0;

	numero1 = atoi(cad1);
	numero2 = atof(cad2);

	std::cout <<"Mi numero entero es: " << numero1 << std::endl;
	std::cout <<"Mi numnero decimal es: " << numero2 << std::endl;

	system("pause");
	return 0;
}