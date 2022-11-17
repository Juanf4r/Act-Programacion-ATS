//Sentencia Switch Ejemplo

#include<iostream>

using namespace std;

int main(){
    int numero;

    cout<<"Digite un numero del 1-5: "; cin>>numero;

    switch(numero){
        case 1: cout<<"El numero es 1"; break;
        case 2: cout<<"El numero es 2"; break;
        case 3: cout<<"El numero es 3"; break;
        case 4: cout<<"El numero es 4"; break;
        case 5: cout<<"El numero es 5"; break;
        default: cout<<"El numero no esta dentro del rango 1-5"; break;
    }
    return 0;
}