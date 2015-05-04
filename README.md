Algoritmos y Programaci�n 2 - FI UBA

# Estructura Din�mica de Datos: Pila

## Marco Te�rico

### Estructura de Datos

Una estructura de datos es una colecci�n de elementos cuya organizaci�n 
l�gica refleja una relaci�n entre ellos.
    
Se caracterizan por las operaciones de acceso que se utilizan para almacenar
y recuperar los elementos individuales.

### Estructura de Datos Est�tica

La estructura l�gica de los elementos que la componen permanece invariante 
a lo largo de toda su utilizaci�n. Ejemplo: Array

### Estructura de Datos Din�mica

La estructura l�gica de los elementos que la componen sufre modificaciones
a lo largo de su utilizaci�n. Ejemplos: Lista, Pila, Cola.

### Pila    
    
Una Pila es una estructura din�mica de datos organizada de acuerdo al principio 
**LIFO** (*Last In - First Out*)

El último elemento en entrar es el primer elemento en salir.

S�lo permite el acceso al elemento que denomina tope.

### Operaciones

* Crear

* Esta vacía?

* Apilar

* Desapilar

* Obtener el Tope

* Destruir

![Pila][pila]

## Enunciado
 
1. Dise�ar la interfaz del TDA Pila de Caracteres.

2. Desarrollar una implementaci�n *est�tica* del TDA Pila de Caracteres. 

3. Cambiar la implementaci�n est�tica por una implementaci�n *din�mica* del TDA 
Pila de Caracteres.    
 
4. Cambiar TDA Pila de Caracteres (interfaz e implementaci�n) por un tipo
parametrizable (*template*): `Pila<T>`.
 
5. Utilizar *excepciones* para manipular condiciones an�malas durante la 
utilizaci�n de `Pila<T>`. 
 
## Desarrollo

1. Definici�n de la interfaz de la clase `Pila`.

    * `Pila.h`: [Pila.h](../punto-01/src/Pila.h)

2. Implementaci�n de la clase `Pila` basada en un arreglo.

    * `Pila.h`: [Pila.h](../punto-02/src/Pila.h)

    * `Pila.cpp`: [Pila.cpp](../punto-02/src/Pila.cpp)

3. Implementaci�n de la clase `Pila` basada en nodos enlazados.

    * `Nodo.h`: [Nodo.h](../punto-03/src/Nodo.h)

    * `Nodo.cpp`: [Nodo.cpp](../punto-03/src/Nodo.cpp)

    * `Pila.h`: [Pila.h](../punto-03/src/Pila.h)

    * `Pila.cpp`: [Pila.cpp](../punto-03/src/Pila.cpp)

4. Implementaci�n del template `Pila<T>` basada en nodos enlazados.

    * `Nodo.h`: [Nodo.h](../punto-04/src/Nodo.h)

    * `Pila.h`: [Pila.h](../punto-04/src/Pila.h)
    
5. Implementaci�n del template `Pila<T>` basada en nodos enlazados, utilizando
excepciones.

    * `Nodo.h`: [Nodo.h](../punto-05/src/Nodo.h)

    * `Pila.h`: [Pila.h](../punto-05/src/Pila.h)


[pila]: http://upload.wikimedia.org/wikipedia/commons/thumb/d/d1/Pila.svg/391px-Pila.svg.png "Pila"

    
