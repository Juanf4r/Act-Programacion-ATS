//Lección 64 Sacar el Valor Absoluto de un número

#include<iostream>
#include<stdlib.h>

//Prototipo de Funcion
template <class TIPOD>
void mostrarAbs(TIPOD numero);

int main()
{
	system("CLS");
	int num1 = -4;
	float num2 = -56.67;
	double num3 = -123.5678;

	mostrarAbs(num1);
	mostrarAbs(num2);
	mostrarAbs(num3);

	std::cout << "\n";

	system("pause");
	return 0;
}

template <class TIPOD>
void mostrarAbs(TIPOD numero) 
{
	if (numero < 0)
	{
		numero = numero * -1;
	}
	std::cout << "El valor absoluto del numero es: " << numero << "\n";
}