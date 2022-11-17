/* Lección 28 Ciclos o Bucles.cpp Hacer que realize la serie fibonacci -> 1 1 2 3 5 8 13 21....n */

#include<iostream>
#include<stdlib.h>

using namespace std;

int main() {

	int n, x = 0, y = 1, z = 1;

	cout << "Digite el numero de elementos: "; cin >> n;

	cout << "1 ";
	for (int i = 1; i < n; i++) {
		z = x + y;
		cout << z << " ";
		x = y;
		y = z;
	}

	cout << "\n";
	system("pause");
	return 0;
}