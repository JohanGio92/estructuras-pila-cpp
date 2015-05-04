#include "Pila.h"

Pila::Pila() {

    this->tope = -1;
}

bool Pila::estaVacia() {

    return (this->tope < 0);
}

void Pila::apilar(char elemento) {

    if (this->tope < MAXIMO - 1) {

        this->tope++;

        this->elementos[this->tope] = elemento;
    }
}

char Pila::desapilar() {

    char elemento = ' ';

    if (! this->estaVacia()) {

        elemento = this->elementos[this->tope];

        this->tope--;
    }

    return elemento;
}

char Pila::obtenerTope() {

    char elemento = ' ';

    if (! this->estaVacia()) {

        elemento = this->elementos[this->tope];
    }

    return elemento;
}

Pila::~Pila() {

}
