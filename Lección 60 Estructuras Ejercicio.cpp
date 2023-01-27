/*Realiza un programa que lea un arreglo de estructuras los datos n empleados de la
empresa y que imprima los datos del empleado con mayor y menor salario. */

#include<iostream>
#include<stdlib.h>
#include<string.h>

struct Empleado
{
	char nombre[20];
	float salario;
}emp[50];

int main()
{
	system("CLS");

	int n_empleados,posM = 0, posm = 0;
	float mayor = 0, menor = 999999;

	std::cout << "Digite el numero de empleados: "; std::cin >> n_empleados;

	for (int i = 0; i < n_empleados; i++)
	{
		std::cout << i + 1 << ". Digite su nombre: "; std::cin >> emp[i].nombre;
		std::cout << i + 1 << ". Digite su salario: "; std::cin >> emp[i].salario;

		//Empleado de Mayor Salario
		if (emp[i].salario > mayor)
		{
			mayor = emp[i].salario;
			posM = i;
		}
		if (emp[i].salario < menor)
		{
			menor = emp[i].salario;
			posm = i;
		}
		std::cout << "\n";
	}

	std::cout << "\n-------Datos del empleado con Mayor Salario-------\n";
	std::cout << "Nombre: " << emp[posM].nombre << "\n";
	std::cout << "Salario: " << emp[posM].salario << "\n\n";

	std::cout << "\n-------Datos del empleado con Menor Salario-------\n";
	std::cout << "Nombre: " << emp[posm].nombre << "\n";
	std::cout << "Salario: " << emp[posm].salario << "\n\n";

	system("pause");
	return 0;
}