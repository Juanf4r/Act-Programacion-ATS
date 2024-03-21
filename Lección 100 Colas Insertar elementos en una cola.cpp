#include <iostream>
#include <cstdlib>

struct Nodo {
    int dato;
    Nodo* siguiente;
};

bool Cola_Vacia(Nodo* frente)
{
    return (frente == NULL) ? true : false;
}

void InsertarCola(Nodo *&frente, Nodo *&fin, int n)
{
    Nodo  *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = n;
    nuevo_nodo->siguiente = NULL;

    if (Cola_Vacia(frente))
    {
        frente = nuevo_nodo;
    }
    else
    {
        fin->siguiente = nuevo_nodo;
    }

    fin = nuevo_nodo;

    std::cout << "Elemento: " << n << " insertado a cola correctamente\n";
}

int main()
{
    system("CLS");

    Nodo* frente = NULL;
    Nodo* fin = NULL;

    int dato;

    std::cout << "Digite un numero: "; std::cin >> dato;
    InsertarCola(frente, fin, dato);

    system("pause");
    return 0;
}