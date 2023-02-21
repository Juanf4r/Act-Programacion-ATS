//Paso de parametros  de tipo estructura

#include<iostream>
#include<stdlib.h>

struct Persona
{
	char nombre[30];
	int edad = 0;
}p1;

void PedirDatos();
void MostrarDatos(Persona);

int main()
{
	system("CLS");

	PedirDatos();
	MostrarDatos(p1);

	system("pause");
	return 0;
}

void PedirDatos()
{
	std::cout << "Digite el nombre del usuario: "; std::cin.getline(p1.nombre, 30, '\n');
	std::cout << "Digite la edad del usuario: "; std::cin >> p1.edad;
}

void MostrarDatos(Persona p)
{
	std::cout << "\nNombre: " << p.nombre << "\n";
	std::cout << "\nEdad: " << p.edad << "\n\n";
}