// Lección 41 Cadena de Caracteres.cpp
//Longitud de Caraceteres - Funcion srlen()

#include <iostream>
#include <stdlib.h>
#include <string.h>

int main()
{
  /*Funcion strlen() sirve se usa para contar los caracteres de un char o string
    Dentro del () se escriba la variable a guardar de tipo int.
  */

    char palabra[] = "Este mensaje tiene 21";
    int longitud = 0;

    longitud = strlen(palabra);

    std::cout << "Numero de elementos de la cadena es: " << longitud << "\n";

    system("pause");
    return 0;
}