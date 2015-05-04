
#include "gtest/gtest.h"
#include "Pila.h"

TEST( PilaCharTest, crear ) {

    Pila<char> pila;

    ASSERT_TRUE( pila.estaVacia() );
}

TEST( PilaCharTest, apilarUnUnicoElemento ) {

    Pila<char> pila;

    pila.apilar('D');

    ASSERT_FALSE( pila.estaVacia() );
}

TEST( PilaCharTest, apilarMultiplesElementos ) {

    Pila<char> pila;

    pila.apilar('O');
    pila.apilar('P');
    pila.apilar('Q');

    ASSERT_FALSE( pila.estaVacia() );
}

TEST( PilaCharTest, desapilarElUnicoElementoApilado ) {

    Pila<char> pila;

    pila.apilar('S');
    const char elemento = pila.desapilar();

    ASSERT_TRUE( pila.estaVacia());
    ASSERT_EQ( 'S', elemento);
}

TEST( PilaCharTest, desapilaTresElementosCumplindoFIFO ) {

    Pila<char> pila;

    pila.apilar('A');
    pila.apilar('B');
    pila.apilar('C');

    ASSERT_FALSE( pila.estaVacia() );
    ASSERT_EQ( 'C', pila.desapilar() );
    ASSERT_FALSE( pila.estaVacia() );
    ASSERT_EQ( 'B', pila.desapilar() );
    ASSERT_FALSE( pila.estaVacia() );
    ASSERT_EQ( 'A', pila.desapilar() );
    ASSERT_TRUE( pila.estaVacia() );
}

TEST( PilaCharTest, obtenerTope ) {

    Pila<char> pila;

    pila.apilar('X');
    pila.apilar('Y');
    pila.apilar('Z');

    ASSERT_FALSE( pila.estaVacia() );
    ASSERT_EQ( 'Z', pila.obtenerTope() );
}

TEST( PilaCharTest, obtenerTopeNoModificaLaPila ) {

    Pila<char> pila;

    pila.apilar('X');

    ASSERT_FALSE( pila.estaVacia() );
    ASSERT_EQ( 'X', pila.obtenerTope() );
    ASSERT_EQ( 'X', pila.obtenerTope() );
    ASSERT_EQ( 'X', pila.obtenerTope() );

    ASSERT_EQ( 'X', pila.desapilar() );
    ASSERT_TRUE( pila.estaVacia() );
}


