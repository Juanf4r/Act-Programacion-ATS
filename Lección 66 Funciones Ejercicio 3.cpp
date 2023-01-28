/* Escriba una funcion nombrada funpot() que eleve un número entero que se le transmita a una potencia
en número entero positivo y despliegue el resultado. El número entero positivo deberá ser el segundo
valor transmitido a la función. */

#include<iostream>
#include<stdlib.h>

//Prototipo de funciones
void pedirDatos();
void funpot(int x, int y);

int numero, exponente;

int main()
{
	system("CLS");
	pedirDatos();
	funpot(numero, exponente);

	system("pause");
	return 0;
}

void pedirDatos()
{
	std::cout << "---------------ELEVACION DE UN NUMERO---------------\n\n";
	std::cout << "Digite un numero: "; std::cin >> numero;
	std::cout << "Digite el exponente de elevacion: "; std::cin >> exponente;
}

void funpot(int x, int y)
{
	long resultado = 1;

	for (int i = 1; i <= y; i++)
	{
		resultado *= x;
	}
	std::cout << "El resultado es: " << resultado << "\n\n";
}