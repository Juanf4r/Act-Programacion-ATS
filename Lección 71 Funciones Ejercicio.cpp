/*Ejercicio 9: Escriba una fuincion nombrada tiempo() que tenga un parametro en numero entero llamado
totalSeg y tres parametros de referencia enteros nombrados horas, min y seg. La funcion es convertir
el numero de segundos transmitido en un numero equivalente de horas, minutos y segundos. */

#include<iostream>
#include<stdlib.h>

void tiempo(int,int&,int&,int&);

int main()
{
	system("CLS");
	int totalSeg, horas, min, seg;
	
	std::cout << "Digite el numero total de segundos: "; std::cin >> totalSeg;
	tiempo(totalSeg, horas, min, seg);

	std::cout << "\n-------------Tiempo Equivalente a la cantidad de segundos-------------\n\n";
	std::cout << "Horas: " << horas << "\n";
	std::cout << "Minutos: " << min << "\n";
	std::cout << "Segundos: " << seg << "\n";

	system("pause");
	return 0;
}

void tiempo(int totalSeg, int& horas, int& min, int& seg)
{
	horas = totalSeg / 3600;
	totalSeg = totalSeg % 3600;
	min = totalSeg / 60;
	seg = totalSeg % 60;
}