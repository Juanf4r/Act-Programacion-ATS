/* Escriba un programa que lea 2 numeros y los diferencie de que numero es mayor o si
son iguales. */

#include<iostream>

using namespace std;

int main(){
    int n1,n2;

    cout<<"Digite un numero entero: "; cin>>n1;
    cout<<"Digite otro numero entero: "; cin>>n2;

    if(n1==n2){
        cout<<"Los numeros son iguales";
    }
    else if(n1>n2){
        cout<<"El mayor es: "<<n1;
    }
    else{
        cout<<"El mayor es: "<<n2;
    }

    return 0;
}