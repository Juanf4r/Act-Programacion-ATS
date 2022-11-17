/*Escriba un programa que solicite una edad que este dentro del rango 18 - 25 años, e indique
en la salida estandar si la edad introducida esta dentro de dicho rango o no.*/

#include<iostream>

using namespace std;

int main() {
	int edad;
	cout << "Digite su edad: "; cin >> edad;

	if ((edad >= 18) && (edad <= 25)) {
		cout << "Su edad esta dentro del rango [18-25]";
	}
	else {
		cout << "Su edad NO esta dentro del rango [18-25]";
	}

	return 0;
}