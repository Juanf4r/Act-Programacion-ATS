#include<iostream>
#include<cstdlib>

struct Nodo {
	int dato;
	Nodo *siguiente;
};

void AgregarPila(Nodo *&pila, int n)
{
	Nodo* nuevo_nodo = new Nodo();
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = pila;
	pila = nuevo_nodo;

	std::cout << "El elemento " << n << " ha sido agregado a Pila correctamente";
}

void SacarPila(Nodo*& pila, int& n)
{
	Nodo *aux = pila;
	n = aux->dato;
	pila = aux->siguiente;
	delete aux;
}

int main()
{
	system("CLS");

	Nodo *pila = NULL;
	int dato;
	char rpt;

	do{
		std::cout << "Digite un numero: "; std::cin >> dato;
		AgregarPila(pila, dato);

		std::cout << "\nDeseas agregar otro elemento a Pila? (S/N): ";
		std::cin >> rpt;


	} while ((rpt == 'S') || (rpt == 's'));

	std::cout << "\nSacando todos los elementos de Pila: ";

	while (pila != NULL)
	{
		SacarPila(pila, dato);
		if (pila != NULL)
		{
			std::cout << dato << ",";
		}
		else
		{
			std::cout << dato << ".";
		}
	}

	std::cout << "\n\n";
	system("pause");
	return 0;
}