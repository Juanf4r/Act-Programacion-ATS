//Busqueda Secuencial

#include<iostream>

int main()
{
	system("CLS");

	int a[] = { 3,4,2,1,5 };
	int i, dato;
	char band = 'F';
	
	//Algoritmo de Busqueda Secuencial
	i = 0; dato = 4;
	while ((band == 'F') && (i < 5))
	{
		if (a[i] == dato)
		{
			band = 'V';
		}
		i++;
	}

	if (band == 'F')
	{
		std::cout << "El numero a buscar no existe en el arreglo :c\n";
	}
	else if(band == 'V')
	{
		std::cout << "El numero ha sido encontrado en la pos: " << i - 1 << std::endl;
	}

	system("pause");
	return 0;
}