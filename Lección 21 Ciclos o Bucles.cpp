/* Lección 21 Ciclos o Bucles.cpp

   La sentencia for

   for(expr1;expresion logica; expr2){
            conjunto de instrucciones;
   }
*/

#include <iostream>
#include<stdlib.h>

using namespace std;

int main(){
    
    for (int i = 10; i >= 1; i--) {
        cout << i << endl;
    }
    
    system("pause");
    return 0;
}

