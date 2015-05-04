
#include "gtest/gtest.h"
#include "Pila.h"

/* hack/truco para poder correr las pruebas sin copiar el fuente */
#include "Pila.cpp"

TEST( PilaCharTest, crear ) {

    Pila pilaDeCaracteres;

    ASSERT_TRUE( pilaDeCaracteres.estaVacia() );
}

