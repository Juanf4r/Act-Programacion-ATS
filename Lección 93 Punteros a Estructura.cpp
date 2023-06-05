//Punteros a Estructuras

#include<iostream>
#include<cstdlib>
#include<string>

struct Persona
{
	char nombre[30];
	int edad;
}persona, *puntero_persona = &persona;

void pedirDatos()
{
	std::cout << "Digite su nombre: "; 
	std::cin.getline(puntero_persona->nombre,30,'\n');
	std::cout << "Digite su edad: "; 
	std::cin >> puntero_persona->edad;
}

void mostrarDatos(Persona *puntero_persona)
{
	std::cout << "Su nombre: " << puntero_persona->nombre << "\n";
	std::cout << "Su edad: " << puntero_persona->edad << "\n\n";
}

int main()
{
	system("CLS");

	pedirDatos();
	mostrarDatos(puntero_persona);

	system("pause");
	return 0;
}