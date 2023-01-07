//Estructura Anidada en C++
#include<iostream>
#include<locale.h>

struct info_direccion
{
	char direccion[30];
	char ciudad[20];
	char provincia[20];
};

struct empleado
{
	char nombre[20];
	struct info_direccion dir_empleado;
	double salario;
}empleados[2];

int main()
{
	system("CLS");

	//Pedir los Datos
	for (int i = 0; i < 2; i++)
	{
		fflush(stdin); //Funcion para vaciar el buffer

		std::cout << "Digite el nombre del " << i + 1 << " empleado: "; std::cin >> empleados[i].nombre;
		std::cout << "Digite la direccion del " << i + 1 << " empleado: "; std::cin >> empleados[i].dir_empleado.direccion;
		std::cout << "Digite la ciudad del " << i + 1 << " empleado: "; std::cin >> empleados[i].dir_empleado.ciudad;
		std::cout << "Digite la provincia del " << i + 1 << " empleado: "; std::cin >> empleados[i].dir_empleado.provincia;
		std::cout << "Digite el salario del " << i + 1 << " empleado: "; std::cin >> empleados[i].salario; std::cout << "\n";

		std::cout << "\n";
	}
	//Imprimiendo los Datos
	for (int i = 0; i < 2; i++)
	{
		std::cout << "Nombre del " << i + 1 << " empleado: " << empleados[i].nombre << "\n";
		std::cout << "Direccion del " << i + 1 << " empleado: " << empleados[i].dir_empleado.direccion << "\n";
		std::cout << "Ciudad del " << i + 1 << " empleado: " << empleados[i].dir_empleado.ciudad << "\n";
		std::cout << "Provincia del " << i + 1 << " empleado: " << empleados[i].dir_empleado.provincia << "\n";
		std::cout << "Salario del " << i + 1 << " empleado: " << empleados[i].salario << "\n";

		std::cout << "\n";
	}

	system("pause");
	return 0;
}