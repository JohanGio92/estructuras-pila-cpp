Algoritmos y Programación 2 - FI UBA

# Estructura Dinámica de Datos: Pila

## Marco Teórico

### Estructura de Datos

Una estructura de datos es una colección de elementos cuya organización 
lógica refleja una relación entre ellos.
    
Se caracterizan por las operaciones de acceso que se utilizan para almacenar
y recuperar los elementos individuales.

### Estructura de Datos Estática

La estructura lógica de los elementos que la componen permanece invariante 
a lo largo de toda su utilización. Ejemplo: Array

### Estructura de Datos Dinámica

La estructura lógica de los elementos que la componen sufre modificaciones
a lo largo de su utilización. Ejemplos: Lista, Pila, Cola.

### Pila    
    
Una Pila es una estructura dinámica de datos organizada de acuerdo al principio 
**LIFO** (*Last In - First Out*)

El Ãºltimo elemento en entrar es el primer elemento en salir.

Sólo permite el acceso al elemento que denomina tope.

### Operaciones

* Crear

* Esta vacÃ­a?

* Apilar

* Desapilar

* Obtener el Tope

* Destruir

![Pila][pila]

## Enunciado
 
1. Diseñar la interfaz del TDA Pila de Caracteres.

2. Desarrollar una implementación *estática* del TDA Pila de Caracteres. 

3. Cambiar la implementación estática por una implementación *dinámica* del TDA 
Pila de Caracteres.    
 
4. Cambiar TDA Pila de Caracteres (interfaz e implementación) por un tipo
parametrizable (*template*): `Pila<T>`.
 
5. Utilizar *excepciones* para manipular condiciones anómalas durante la 
utilización de `Pila<T>`. 
 
## Desarrollo

1. Definición de la interfaz de la clase `Pila`.

    * `Pila.h`: [Pila.h](../punto-01/src/Pila.h)

2. Implementación de la clase `Pila` basada en un arreglo.

    * `Pila.h`: [Pila.h](../punto-02/src/Pila.h)

    * `Pila.cpp`: [Pila.cpp](../punto-02/src/Pila.cpp)

3. Implementación de la clase `Pila` basada en nodos enlazados.

    * `Nodo.h`: [Nodo.h](../punto-03/src/Nodo.h)

    * `Nodo.cpp`: [Nodo.cpp](../punto-03/src/Nodo.cpp)

    * `Pila.h`: [Pila.h](../punto-03/src/Pila.h)

    * `Pila.cpp`: [Pila.cpp](../punto-03/src/Pila.cpp)

4. Implementación del template `Pila<T>` basada en nodos enlazados.

    * `Nodo.h`: [Nodo.h](../punto-04/src/Nodo.h)

    * `Pila.h`: [Pila.h](../punto-04/src/Pila.h)
    
5. Implementación del template `Pila<T>` basada en nodos enlazados, utilizando
excepciones.

    * `Nodo.h`: [Nodo.h](../punto-05/src/Nodo.h)

    * `Pila.h`: [Pila.h](../punto-05/src/Pila.h)


[pila]: http://upload.wikimedia.org/wikipedia/commons/thumb/d/d1/Pila.svg/391px-Pila.svg.png "Pila"

    
