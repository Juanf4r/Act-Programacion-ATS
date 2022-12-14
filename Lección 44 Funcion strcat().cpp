#include<iostream>
#include<string.h>
#include<stdlib.h>

int main()
{
	char cad[] = "Hola que tal";
	char cad2[] = "";
	char cad3[] = "";

	std::cout << "Muy buenas usuario me podria decir su nombre por favor: "; std::cin >> cad2;

	strcpy_s(cad3, cad);
	strcat_s(cad3, cad2);

	std::cout << "Bienvenido al programa " << cad3 << "\n";


	system("pause");
	return 0;
}