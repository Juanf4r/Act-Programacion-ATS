// Lección 94 Punteros Mejor Promedio de 3 estudiantes.cpp 

#include<iostream>
#include<cstdlib>

struct Alumno {
    char nombre[30];
    int edad;
    float promedio;
}alumno[3], * puntero_alumno = &alumno[0];

void pedirDatos()
{
    for (int i = 0; i < 3; i++)
    {
        std::cout << "Digite su nombre: ";
        std::cin.getline((puntero_alumno + i)->nombre, 30, '\n');
        std::cout << "Digite su edad: ";
        std::cin>>(puntero_alumno + i)->edad;
        std::cout << "Digite el promedio: ";
        std::cin >> (puntero_alumno + i)->promedio;
        std::cout << "\n\n";
        std::cin.ignore();
    }
}

void calcularMejorPromedio(Alumno *puntero_alumno)
{
    float mayor = 0.0;
    int pos = 0;

    for (int i = 0; i < 3; i++)
    {
        if ((puntero_alumno + i)->promedio > mayor)
        {
            mayor = (puntero_alumno)->promedio;
            pos = i;
        }
    }

    std::cout << "\nEl alumno con mejor Promedio es: \n";
    std::cout << "Nombre: " << (puntero_alumno + pos)->nombre << " \n";
    std::cout << "Edad: " << (puntero_alumno + pos)->edad << " \n";
    std::cout << "Promedio: " << (puntero_alumno + pos)->promedio << " \n";
}

int main()
{
    system("CLS");

    pedirDatos();
    calcularMejorPromedio(puntero_alumno);

    system("pause");
    return 0;
}