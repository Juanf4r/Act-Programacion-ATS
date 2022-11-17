/*Escribe un programa que lea de la entrada estandar un vector de números y muestre en la salida estándar
los números del vector con sus índices asociados */

#include<iostream>
#include<stdlib.h>

using namespace std;

int main() {
	int numeros[100] , n;

	cout << "Digite el numero de elementos que va a tener el arreglo: "; cin >> n;

	for (int i = 0; i < n; i++) {
		cout << "Digite un numero: "; cin >> numeros[i];
}
	//Vamos a mostrar los elementos con sus indices asociados
	for (int i = 0; i < 5; i++) {
		cout << i << " -> " << numeros[i] << endl;
}
	system("pause");
	return 0;
}