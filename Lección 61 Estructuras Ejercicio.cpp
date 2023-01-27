/*Hacer 2 estructuras una llamada promedio que tendrá lo sig: nota1, nota2, nota3; y otro llamada alumno que tendrá los
siguientes miembros: nombre, sexo, edad; hacer que la estructura promedio este aniadada en la estructura alumno, luego pedir
todos los datos para un alumno, luego calcular su promedio y por ultimo imprimir todos sus datos incluidos el promedio. */

#include<iostream>
#include<stdlib.h>

struct promedio 
{
	float nota1;
	float nota2;
	float nota3;
};

struct alumno
{
	char nombre[30];
	char sexo[10];
	int edad;
	struct promedio prom;
}alumno1;

int main()
{
	system("CLS");
	float promedio_alumno;
	std::cout << "----------Datos del Alumno----------\n\n";
	std::cout << "Digite su nombre: "; std::cin >> alumno1.nombre;
	std::cout << "Digite su sexo: "; std::cin >> alumno1.sexo;
	std::cout << "Digite su edad: "; std::cin >> alumno1.edad;

	std::cout << "\n----------Notas del Alumno----------\n\n";
	std::cout << "Nota 1: "; std::cin >> alumno1.prom.nota1;
	std::cout << "Nota 2: "; std::cin >> alumno1.prom.nota2;
	std::cout << "Nota 3: "; std::cin >> alumno1.prom.nota3;

	std::cout << "\n\n";

	promedio_alumno = (alumno1.prom.nota1 + alumno1.prom.nota2 + alumno1.prom.nota3) / 3;

	//Imprimir Datos
	std::cout << "------------Expediente------------\n\n";
	std::cout << "Nombre: " << alumno1.nombre<<"\n";
	std::cout << "Sexo: " << alumno1.sexo << "\n";
	std::cout << "Edad: " << alumno1.edad << "\n";
	std::cout << "Promedio: " << promedio_alumno << "\n\n";

	system("pause");
	return 0;
}