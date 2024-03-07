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

void SacarPila(Nodo*& pila, int n)
{
    Nodo* aux = pila;
    n = aux->dato;
    pila = aux->siguiente;
    delete aux;
}


int main()
{
    system("CLS");

    Nodo* pila = NULL;

    int dato = 0;

    std::cout << "Digite un numero: "; std::cin >> n1;
    AgregarPila(pila, dato;);

    std::cout << "Digite otro numero: "; std::cin >> n2;
    AgregarPila(pila, dato;);

    std::cout << "\nSacando los elementos de la pila: ";

    while (pila != NULL)
    {
        SacarPila(pila, dato);
        if (pila != NULL)
        {
            std::cout << "Dato: " << dato << ",";
        }
        else
        {
            std::cout << dato << ".";
        }
    }

    system("pause");
    return 0;
}
