/* Lección 65 Funciones.cpp
Escriba una funcion llamada mult() que acepte dos numeros en punto flotante con parametros, 
multiplique estos dos numeros y despligue el resultado.
*/
#include <iostream>
#include <stdlib.h>

//Prototipos de Funcion
void pedirDatos();
void mult(float x, float y);

float num1, num2;

int main()
{
    system("CLS");

    pedirDatos();
    mult(num1, num2);

    system("pause");
    return 0;
}

void pedirDatos()
{
    std::cout << "Digite 2 numeros: "; std::cin >> num1 >> num2;
}

void mult(float x, float y)
{
    float multiplicacion = x * y;

    std::cout << "La multiplicacion es: " << multiplicacion << "\n";
}