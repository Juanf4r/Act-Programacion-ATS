/* Lección 29 Número Magico.cpp realice un programa que solicite al usuario que piense un numero entero entre el 1 y el 100. 
El programa debe generar un número aleatorio en ese mismo rango(1-100), e indicarle al usuario si el número que digitó
es menor o mayor al número aleatorio, así hasta que lo adivine y por ultimo mostrarle el número de intentos que llevo */ 

#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main() {
	int numero, dato, contador = 0;

	srand(time(NULL)); //Generador de numero random
	dato = 1 + rand() % (100 + 1 - 1);

	do {
		cout << "Digite un numero: "; cin >> numero;
		if (numero > dato) {
			cout << "\nDigite un numero menor\n";
		}
		if (numero < dato) {
			cout << "\nDigite un numero mayor\n";
		}
		contador++;
	} while (numero != dato);

	cout << "\nFELICIDADES ADIVINASTE EL NUMERO\n";
	cout << "\nNumero de intentos: " << contador << endl;

	system("pause");
	return 0;
}