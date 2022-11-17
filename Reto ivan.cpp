// Reto ivan.cpp
#include <iostream>
#include<stdlib.h>
#include<string>

using namespace std;

int main()
{
    string frase;
    cout << "Escribe tu Frase: "; getline( cin, frase);

    for (int i = 0; i < frase.size(); i++)
    {
        if(char(frase[i]) < 65 || char(frase[i]) > 90)
        {
            frase[i] = char(frase[i] - 32 );
            
        }
        else
        {

        }
        
    }
    cout << frase;
    cout << endl;

    system("pause");
    return 0;
}

