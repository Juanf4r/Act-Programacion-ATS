/*Pedir su nombre al usuario y devolver el número de vocales que hay.
NOTA: Recuerda que debes utilizar punteros. */

#include<iostream>
#include<cstdlib>

char nombreUsuario[30];

void pedirDatos()
{
	std::cout << "Digite su nombre: "; std::cin.getline(nombreUsuario, 30, '\n');
	_strupr_s(nombreUsuario); //Convierte el array de char en MAYUSCULAS
}

int contandoVocales(char *nombre)
{
	int cont = 0;

	while (*nombre)
	{
		switch (*nombre)
		{
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U': cont++; break;
		}
		nombre++;
	}
	return cont;
}

int main()
{
	system("CLS");

	pedirDatos();
	std::cout << "\nEl numero de Vocales del nombre es: "<< contandoVocales(&nombreUsuario[0])<<"\n";
	//nombreUsuario = &nombreUsuario[0], escribir la variable del array sin [] es lo mismo que decir su posición 0.

	system("pause");
	return 0;
}