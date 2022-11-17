/* Lección 26 Ciclos o Bucles.cpp Escriba un programa que calcuce el valor de: 
* 1*2*3*4*n(factorial)*/ 

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int numero, factorial = 1;

	cout << "Digite un numero: "; cin >> numero;

	for (int i = 1; i <= numero; i++) {
		factorial = factorial * i;
	}
	// Esto es lo mismo que 5!

	cout << "\nEl factorial del numero es: " << factorial << endl;


	system("pause");
	return 0;
}
