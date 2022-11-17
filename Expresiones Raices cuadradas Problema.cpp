/*Realice una operacion matematica*/

#include<iostream>
#include<math.h>

using namespace std;

int main(){
    float a,b,c[10], x1 = 0, x2 = 0;

    cout<<"Digite el valor de a: "; cin>>a;
    cout<<"Digite el valor de b: "; cin>>b;
    cout<<"Digite el valor de c: "; cin>>c;

    x1 = (-b+sqrt(pow(b,2)-4*a*c))/(2*a);
    x2 = (-b-sqrt(pow(b,2)-4*a*c))/(2*a);

    cout<<"X1 es igual a: "<<x1<<endl;
    cout<<"X2 es igual a: "<<x2<<endl;

    return 0;
}