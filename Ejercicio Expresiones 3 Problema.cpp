/* Escriba un programa que lea la nota final de cuatro alumnos y calcule
la nota final media de los 4 alumnos*/

#include<iostream>

using namespace std;

int main(){
	
	float a,b,c,d;
	float e = 0;
	
	cout<<"Anote la calificacion final del Primer Alumno: "<<cin<<a;
	cout<<"Anote la calificacion final del Segundo Alumno: "<<cin<<b;
	cout<<"Anote la calificacion final del Tercer Alumno: "<<cin<<c;
	cout<<"Anote la calificacion final del Cuarto Alumno: "<<cin<<d;
	
	e = (a+b+c+d/4);
	
	cout<<"La calificacion Promedio es: "<<e<<endl;
	
	return 0;
}
