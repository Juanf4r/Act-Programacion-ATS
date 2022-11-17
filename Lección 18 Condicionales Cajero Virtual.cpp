// 11. Hacer un cajero virtual con un saldo inicial de 1000 Dolares.

#include<iostream>

using namespace std;

int main() {
	int saldo_inicial = 1000, opc;
	float extra, saldo = 0, retiro;

	cout << "\t Bienvenido a su Cajero Virtual" << endl;
	cout << "Su saldo es de: " << saldo_inicial; cout <<" Dolares" << endl;
	cout << "1. Ingresar dinero a su cuenta" << endl;
	cout << "2. Retirar dinero de su cuenta" << endl;
	cout << "3. Salir" << endl;
	cout << "Eliga una opcion: "; cin >> opc;

	switch (opc) {
	case 1:
		cout << "Digite la cantidad de dinero a ingresar: "; cin >> extra;
		saldo = saldo_inicial + extra;
		cout << "Dinero en cuenta: " << saldo; break;

	case 2:
		cout << "Digite la cantidad de dinero que va a retirar: "; cin >> retiro;

		if (retiro > saldo_inicial) {
			cout << "NO tiene esa cantidad de dinero";
		}
		else {
			saldo = saldo_inicial - retiro; 
			cout << "Dinero en cuenta: " << saldo;
		}

	case 3: break;
	}
	return 0;
}