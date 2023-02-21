/*Ejercicio 17: Suma de numeros Complejos

z1 = 5-3i ,  z2 = -4+2i

z1 + z2 = (5-3i)+(-4+2i)
		= 5-3i-4+2i
		= 1-i	
*/

#include<iostream>
#include<stdlib.h>

struct Complejo
{
	float real, imaginaria;
}z1,z2;

void PedirDatos();
Complejo suma(Complejo, Complejo);
void Muestra(Complejo);

int main()
{
	system("CLS");

	PedirDatos();
	Complejo  x = suma(z1, z2);
	Muestra(x);

	system("pause");
	return 0;
}

void PedirDatos()
{
	std::cout << "Digite los datos del primer Numero Complejo \n\n";
	std::cout << "Parte Real: "; std::cin >> z1.real;
	std::cout << "Parte Imaginaria: "; std::cin >> z1.imaginaria;

	std::cout << "\nDigite los datos del Segundo Numero Complejo \n\n";
	std::cout << "Parte Real: "; std::cin >> z2.real;
	std::cout << "Parte Imaginaria: "; std::cin >> z2.imaginaria;
}

Complejo suma(Complejo z1, Complejo z2)
{
	z1.real += z2.real;
	z1.imaginaria += z2.imaginaria;

	return z1;
}

void Muestra(Complejo x)
{
	std::cout << "\nResultado de la Suma: " << x.real << " , " << x.imaginaria << "\n";
}