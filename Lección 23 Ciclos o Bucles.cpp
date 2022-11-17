/*Leccion 23 Ciclos o Bucles.cpp
Realcie un programa que calcule y muestre en la salida estandar 
la suma de los cuadrados de los 10 primero enteros mayores que cero*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){

	int suma = 0, cuadrado;

	for (int i = 1; 1 <= 10; i++) {
		cuadrado = i * i;
		suma += cuadrado;
	}

	cout << "El resultado es: " << suma << endl;

	system("pause");
	return 0;
}
