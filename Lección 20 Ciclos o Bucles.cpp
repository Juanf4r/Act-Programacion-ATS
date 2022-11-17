// Lección 20 Ciclos o Bucles.cpp 
/*La sentencia do while
           do{
              conjunto de instrucciones;
          } while(expresion logica);
 */

#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {

    int i;
    i = 1;

    do {
        cout << i << endl;
        i++; //aumenta el iterador de uno en uno
    } while (i <= 10);

    system("pause");
        return 0;

}

