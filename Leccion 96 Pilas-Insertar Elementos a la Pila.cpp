// Leccion 96 Pilas-Insertar Elementos a la Pila.cpp 
#include <iostream>
#include <cstdlib>

struct Nodo {
    int dato;
    Nodo* siguiente;
};

void AgregarPila(Nodo*& pila, int n)
{
    Nodo* nuevo_nodo = new Nodo();
    nuevo_nodo->dato = n;
    nuevo_nodo->siguiente = pila;
    pila = nuevo_nodo;

    std::cout << "\Elemento " << n << " agregado a la PILA correctamente \n";
}


int main()
{
    system("CLS");

    Nodo* pila = NULL;

    int n1, n2;

    std::cout << "Digite un numero: "; std::cin >> n1;
    AgregarPila(pila, n1);

    std::cout << "Digite otro numero: "; std::cin >> n2;
    AgregarPila(pila, n2);


    system("pause");
    return 0;
}
