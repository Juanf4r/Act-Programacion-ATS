/* Crear una estructura de Corredor, en la cual se tendrán los siguientes campos : Nombre, Edad, Sexo, Club,pedir datos
 al usuario para un corredor y establecer su categoria de competición: 
 -Juvenil <=18 años
 -Senior <=40 años
 -Veterano >40 años
 Al final imprimir todos los datos ordenados incluyendo su categoria de competición.
 */

#include<iostream>
#include<stdlib.h>

struct corredor 
{
	char nombre[20];
	int edad;
	char sexo[10];
	char club[20];
}c1;

int main()
{
	system("CLS");

	char categoria[20];

	std::cout << "Digite el nombre: "; std::cin >> c1.nombre;
	std::cout << "Digite su Edad: "; std::cin >> c1.edad;
	fflush(stdin);
	std::cout << "Digite el Sexo: "; std::cin >> c1.sexo;
	std::cout << "Digite el Club: "; std::cin >> c1.club;

	if (c1.edad <= 18)
	{
		strcpy_s(categoria, "Juvenil");
	}
	else if (c1.edad <= 40)
	{
		strcpy_s(categoria, "Senior");
	}
	else
	{
		strcpy_s(categoria, "Veterano");
	}

	std::cout << "\n---------------Datos del Corredor---------------\n\n";
	std::cout << "Nombre: " << c1.nombre << "\n";
	std::cout << "Edad: " << c1.edad << "\n";
	std::cout << "Sexo: " << c1.sexo << "\n";
	std::cout << "Club: " << c1.club << "\n";

	std::cout << std::endl;

	system("pause");
	return 0;
}