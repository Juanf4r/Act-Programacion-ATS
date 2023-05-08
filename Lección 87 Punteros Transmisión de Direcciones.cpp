/*Transmisión de Direcciones

Ejemplo: Intercambiar el valor de 2 variables. */

#include<iostream>
#include<cstdlib>

void intercambio(float*dirNm1, float*dirrNm2)
{
	float aux;
	aux = *dirNm1;
	*dirNm1 = *dirrNm2;
	*dirrNm2 = aux;
}

int main()
{
	system("CLS");

	float num1 = 20.8, num2 = 6.78;

	std::cout << "Primer Numero: " << num1 << "\n";
	std::cout << "Segundo Numero: " << num2 << "\n";

	intercambio(&num1, &num2); std::cout << "\n---------INTERCAMBIO DE VALORES---------\n\n";

	std::cout << "Primer Numero: " << num1 << "\n";
	std::cout << "Segundo Numero: " << num2 << "\n\n";

	system("pause");
	return 0;
}