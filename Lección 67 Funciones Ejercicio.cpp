/* Escriba una plantilla de funcion llamada despliegue() que despliegue el valor del
argumento único que se le transmite cuando es invocada la función. */

#include<iostream>
#include<stdlib.h>

template <class TIPOD> 
void despliegue(TIPOD dato);

int main()
{
	system("CLS");

	int dato1 = 4;
	float dato2 = 15.67;
	double dato3 = 567.7890;
	char dato4 = 'a';

	std::cout << "----------------PLANTILLA DE FUNCION----------------\n\n";

	despliegue(dato1);
	despliegue(dato2);
	despliegue(dato3);
	despliegue(dato4);

	system("pause");
	return 0;
}

template <class TIPOD>
void despliegue(TIPOD dato)
{
	std::cout << "El dato es: " << dato << std::endl;
}