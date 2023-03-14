/*Recursividad

Factorial de un número 3! 3*2*1

	0! = 1

	factorial (n) = 1                 ,si n=0
					n*factorial (n-1)*,si n>0
*/

#include<iostream>
#include<stdlib.h>

int factorial(int);
void PedirDatos();

int n = 0;

int main()
{
	system("CLS");

	PedirDatos();
	std::cout<<factorial(n)<<std::endl;

	system("pause");
	return 0;
}

int factorial(int n)
{
	if (n == 0)
	{
		n = 1;
	}
	else
	{
		n = n * factorial(n - 1);
	}
	return n;
}

void PedirDatos()
{
	std::cout << "Digite el valor de n: "; std::cin >> n;
}