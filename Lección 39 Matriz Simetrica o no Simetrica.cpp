/* Lección 38 Matriz Simetrica o no Simetrica.cpp 

7. Desarrollar un programa que determine si una matriz es simetrica o no. 
Una matriz es simétrica si es cuadradada y si es igual a su matriz transpuesta.
/ 8 1 3 /          / 8 1 3 /
/ 1 7 4 /   --->   / 1 7 4 /
/ 3 4 9 /          / 3 4 9 /

*/

#include <iostream>
#include <stdlib.h>

int main()
{
    int numeros[100][100], filas, columnas;
    char band = 'F';

    std::cout << "--------------------------COMPROBACION DE SIMETRIA EN MATRICES--------------------------\n\n";

    //Numeros de filas y columnas

    std::cout << "Digite el numero de filas: "; std::cin >> filas;
    std::cout << "Digite el numero de columnas: "; std::cin >> columnas;
    std::cout << "\n";

    //Rellenar la Matriz

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            std::cout << "Digite un numero [" << i << "][" << j << "]: ";
            std::cin >> numeros[i][j];
        }
    }

    //Comparacion de Matriz con Matriz Transpuesta

    if (filas == columnas) {
        for (int i = 0; i < filas; i++) {
            for (int j = 0; j < columnas; j++) {
                if (numeros[i][j] == numeros[j][i]) {
                    band = 'V';
                }
            }
        }
    }

    //Confirmacion de Simetria

    std::cout << "\n";

    if (band == 'V') {
        std::cout << "La Matriz es Simetrica\n\n";
    }
    else {
        std::cout << "La Matriz no es Simetrica\n\n";
    }
    system("pause");
    return 0;
}