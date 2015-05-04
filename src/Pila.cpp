#include "Pila.h"

#define ELEMENTO_INVALIDO 0;

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

    char elemento = ELEMENTO_INVALIDO;

    if (! this->estaVacia()) {

        elemento = this->elementos[this->tope];

        this->tope--;
    }

    return elemento;
}

char Pila::obtenerTope() {

    char elemento = ELEMENTO_INVALIDO;

    if (! this->estaVacia()) {

        elemento = this->elementos[this->tope];
    }

    return elemento;
}

Pila::~Pila() {

}
