//Escribe un Programa que lea un caracter y diga si es vocal minuscula o no lo es.

#include<iostream>

using namespace std;

int main() {
	char letra;

	cout << "Digite un caracter: "; cin >> letra;

	switch (letra) {
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u': cout << "Es una vocal minuscula"; break;
	default: cout << "NO es una vocal minuscula"; break;
	}

	return 0;
}