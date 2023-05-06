//Correspondencia entre arrays y punterros

#include<iostream>
#include<cstdlib>

int main()
{
	int numeros[] = { 1,2,3,4,5 };
	int* dir_numeros;

	dir_numeros = &numeros[0];

	for (int i = 0; i < 5; i++)
	{
		std::cout << "Elemento del Vector [" << i << "]: " << *dir_numeros++ << "\n";
	}
	std::cout << "\n";

	system("pause");
	return 0;
}