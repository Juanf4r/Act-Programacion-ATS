/*Asignación dinamica de arrreglos

new: Rerserva el número de bytes solicitado por la declaración,
delete: Libera un bloque de bytes reservado con anterioridad.

Ejemplo: Pedir al usuario n calificaciones y almacenarlos en un arrreglo dinamico.
*/

#include<iostream>
#include<cstdlib>

int numCalif, *calif;

void pedirNotas()
{
	std::cout << "Digite el Numero de Calificaciones: ";
	std::cin >> numCalif;

	calif = new int[numCalif]; //Crear el arreglo

	for (int i = 0; i < numCalif; i++)
	{
		std::cout << "Ingrese una nota: ";
		std::cin >> calif[i];
	}
}

void MostrarNotas()
{
	std::cout << "\n---------Mostrando notas del usuario---------\n\n";
	for (int i = 0; i < numCalif; i++)
	{
		std::cout << calif[i] << "\n";
	}
	std::cout << "\n";
}

int main()
{
	system("CLS");
	
	pedirNotas();
	MostrarNotas();

	delete[] calif; //Liberarando el espacio en bytes utilizados anteriormente

	system("pause");
	return 0;
}