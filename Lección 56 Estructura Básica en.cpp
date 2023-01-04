//Estructura Básica en C++

#include<iostream>

struct Persona 
{
	char nombre[20];
	int edad;
}
persona1 = { "Juanito",18 },
persona2 = { "Luis",16 };

int main()
{
	system("CLS");

	std::cout << "---------Primera Persona---------\n";
	std::cout << "Nombre: " << persona1.nombre << "\n";
	std::cout << "Edad: " << persona1.edad << "\n\n";

	std::cout << "---------Segunda Persona---------\n";
	std::cout << "Nombre: " << persona2.nombre << "\n";
	std::cout << "Edad: " << persona2.edad << "\n\n";

	system("pause");
	return 0;
}