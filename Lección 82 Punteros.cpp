/* Punteros - Declaración de Punterros

&n = La dirreccion de n
*n = La variable cuya direccion esta almacenada en n

*/

#include<iostream>
#include<stdlib.h>

int main()
{
	system("CLS");

	int num,*dir_num;

	num = 20;
	dir_num = &num;

	std::cout << "Numero: " <<*dir_num<< std::endl;
	std::cout << "Direccion de mem: " << dir_num << std::endl;

	system("pause");
	return 0;
}