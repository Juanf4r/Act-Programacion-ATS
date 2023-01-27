/*Defina una estructura que indique el tiempo empleado por un ciclista en
una etapa. La estructura debe tener tres campos: horas, minutos y segundos.
Escriba un programa que dado n etapas calcucle el tiempo total emplpeado en correr todas las etapas. */

#include<iostream>
#include<stdlib.h>

struct etapas
{
	int horas;
	int minutos;
	int segundos;
}et[100];

int main()
{
	system("CLS");
	int n_etapas,horasT = 0,minutosT= 0,segundosT = 0;

	std::cout << "Digite el numero de etapas: "; std::cin >> n_etapas; std::cout << "\n";

	for (int i = 0; i < n_etapas; i++)
	{
		std::cout << "--------Etapa " << i +1 << "--------\n\n";
		std::cout << "Horas: "; std::cin >> et[i].horas;
		std::cout << "Minutos: "; std::cin >> et[i].minutos;
		std::cout << "Segundos: "; std::cin >> et[i].segundos;

		horasT = horasT + et[i].horas;
		minutosT = minutosT + et[i].minutos;
		if (minutosT >= 60)
		{
			minutosT -= 60;
			horasT++;
		}
		segundosT = segundosT + et[i].segundos;
		if (segundosT >= 60)
		{
			segundosT -= 60;
			minutosT++;
		}
		
	}

	std::cout << "\n-----------Tiempo total empleado-----------\n\n";
	std::cout << "Horas: " << horasT << "\n";
	std::cout << "Minutos: " << minutosT << "\n";
	std::cout << "Segundos: " << segundosT << "\n";
	std::cout << "Etapas recorridas: " << n_etapas << "\n\n";

	system("pause");
	return 0;
}