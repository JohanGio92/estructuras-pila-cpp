#include "Pila.h"
#include <string>
#include <iostream>

using namespace std;

int main() {

    Pila<int> pila;

    pila.apilar(3);
    pila.apilar(5);
    pila.apilar(1);
    pila.apilar(6);

    while (! pila.estaVacia()) {

        cout << pila.desapilar() << endl;
    }

    return 0;
}
