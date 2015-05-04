
#include "gtest/gtest.h"
#include "Pila.h"

TEST( PilaIntTest, crear ) {

    Pila<int> pila;

    ASSERT_TRUE( pila.estaVacia() );
}

TEST( PilaIntTest, apilarUnUnicoElemento ) {

    Pila<int> pila;

    pila.apilar(4);

    ASSERT_FALSE( pila.estaVacia() );
}

TEST( PilaIntTest, apilarMultiplesElementos ) {

    Pila<int> pila;

    pila.apilar(5);
    pila.apilar(6);
    pila.apilar(7);

    ASSERT_FALSE( pila.estaVacia() );
}

TEST( PilaIntTest, desapilarElUnicoElementoApilado ) {

    Pila<int> pila;

    pila.apilar(56);
    const int elemento = pila.desapilar();

    ASSERT_TRUE( pila.estaVacia());
    ASSERT_EQ( 56, elemento);
}

TEST( PilaIntTest, desapilaTresElementosCumplindoFIFO ) {

    Pila<int> pila;

    pila.apilar(1);
    pila.apilar(2);
    pila.apilar(3);

    ASSERT_FALSE( pila.estaVacia() );
    ASSERT_EQ( 3, pila.desapilar() );
    ASSERT_FALSE( pila.estaVacia() );
    ASSERT_EQ( 2, pila.desapilar() );
    ASSERT_FALSE( pila.estaVacia() );
    ASSERT_EQ( 1, pila.desapilar() );
    ASSERT_TRUE( pila.estaVacia() );
}

TEST( PilaIntTest, obtenerTope ) {

    Pila<int> pila;

    pila.apilar(12);
    pila.apilar(14);
    pila.apilar(16);

    ASSERT_FALSE( pila.estaVacia() );
    ASSERT_EQ( 16, pila.obtenerTope() );
}

TEST( PilaIntTest, obtenerTopeNoModificaLaPila ) {

    Pila<int> pila;

    pila.apilar(23);

    ASSERT_FALSE( pila.estaVacia() );
    ASSERT_EQ( 23, pila.obtenerTope() );
    ASSERT_EQ( 23, pila.obtenerTope() );
    ASSERT_EQ( 23, pila.obtenerTope() );

    ASSERT_EQ( 23, pila.desapilar() );
    ASSERT_TRUE( pila.estaVacia() );
}

