/* Lección 37 Matrices Transpuestas.cpp
Realice un programa que lea una matriz de 3x3 y cree su matriz transpuesta. 
La matriz transpuesta es aquella en la quela columna i era la fila i de la matriz 
original.
*/

#include <iostream>
#include<stdlib.h>
#include<Windows.h>

int main()
{
    int numeros[3][3];

    std::cout << "-------------MATRICES TRANSPUESTAS-------------\n\n";

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout <<"Digite un numero [" << i << "][" << j << "]: ";
            std::cin >> numeros[i][j];
        }
    }
    std::cout << "\nMatriz Original\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << numeros[i][j];
        }
        std::cout << "\n";
    }

    std::cout << "\nMatriz Transpuesta\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << numeros[j][i];
        }
        std::cout << "\n";
    }
    std::cout << "\n";

    system("pause");
    return 0;
}