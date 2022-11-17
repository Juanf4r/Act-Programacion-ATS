// 5.- Escribe un fragmento de programa que intercambie los valores de dos variables

#include<iostream>

using namespace std;

int main(){
	
	int x,y,aux;
	
	cout<<"Digite el valor de x: "; cin>>x;
	cout<<"Digite el valor de y: "; cin>>y;
	
	aux = x;
	x = y;
	y = aux;
	
	cout<<"\nEl valor de x ahora es: "<<x<<endl;
	cout<<"\nEl valor de y ahora es: "<<y<<endl;
	
	return 0;
}
