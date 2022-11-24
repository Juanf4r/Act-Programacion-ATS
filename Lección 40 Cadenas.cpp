// Lección 40 Cadenas.cpp
//Cadena de Caracteres

#include <iostream>
#include <stdlib.h>
#include <string.h>

int main()
{
    char palabra[] = "Juanfer";
    char palabra2[] = {'A','E','I','O','U'};
    char nombre[20];

    std::cout << "Digite un nombre: ";
    std::cin.getline(nombre, 20, '\n');

    //std::cin.getline(variable a guardar,Num de Caracteres,Cuando termina

    std::cout <<"\n" << nombre << "\n\n";

    system("pause");
    return 0;
}