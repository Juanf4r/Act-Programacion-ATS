//Ejercicio contar cada vocal en una frase
//Juan Fernando Aispuro

#include<iostream>
#include<string.h>
#include<Windows.h>

int main()
{
	system("CLS");

	char frase[30];
	int vocal_a = 0, vocal_e = 0, vocal_i = 0, vocal_o = 0, vocal_u = 0;

	std::cout << "Digite una frase por favor: "; std::cin.getline(frase, 30, '\n');
	
	for (int i = 0; i < 30; i++)
	{
		switch (frase[i])
		{
			case 'a': vocal_a++; break;
			case 'e': vocal_e++; break;
			case 'i': vocal_i++; break;
			case 'o': vocal_o++; break;
			case 'u': vocal_u++; break;
		}
	}

	std::cout << "Hay " << vocal_a << " vocales de la letra a\n";
	std::cout << "Hay " << vocal_e << " vocales de la letra e\n";
	std::cout << "Hay " << vocal_i << " vocales de la letra i\n";
	std::cout << "Hay " << vocal_o << " vocales de la letra o\n";
	std::cout << "Hay " << vocal_u << " vocales de la letra u\n";

	system("pause");
	return 0;
}