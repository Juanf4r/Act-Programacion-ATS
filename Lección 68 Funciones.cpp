// Lección 68 Funciones Paso de Parametros por Referencia

#include <iostream>

void valNuevo(int&, int&);

int main()
{
    system("CLS");

    int num1, num2;

    std::cout << "----------------LECCION PARAMETRO POR REFERENCIA----------------\n\n";
    std::cout << "Digite 2 numeros: "; std::cin >> num1 >> num2;

    valNuevo(num1, num2);

    std::cout << "El nuevo valor del primer numero es: " << num1 << "\n";
    std::cout << "El nuevo valor del segundo numero es: " << num2 << "\n\n";

    system("pause");
    return 0;
}

void valNuevo(int& xnum, int& ynum)
{
    std::cout << "El valor del primer numero es: " << xnum << "\n";
    std::cout << "El valor del segundo numero es: " << ynum << "\n";

    xnum = 89;
    ynum = 45;
}