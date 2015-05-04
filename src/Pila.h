#ifndef PILA_H_
#define PILA_H_

#define MAXIMO 100000

/*
 * Una Pila es una estructura din�mica de datos organizada de acuerdo al
 * principio LIFO (Last In - First Out).
 *
 * El �ltimo elemento en entrar es el primer elemento en salir.
 *
 * S�lo permite el acceso al elemento que denomina tope.
 *
 */
class Pila {

    private:

        char elementos[MAXIMO];

        int tope;

    public:

        /*
         * post: instancia de Pila vac�a y lista para ser usada.
         */
        Pila();

        /*
         * post: devuelve si la Pila no tiene ning�n elemento.
         */
        bool estaVacia();

        /*
         * post: agrega 'elemento' en el tope de la Pila.
         */
        void apilar(char elemento);

        /*
         * pre : la Pila no est� vac�a.
         * post: remueve el tope de la Pila y lo devuelve.
         */
        char desapilar();

        /*
         * pre : la Pila no est� vac�a.
         * post: devuelve el tope de la Pila.
         */
        char obtenerTope();

        /*
         * post: remueve todos los elementos y libera
         *       los recursos tomados por la estructura de datos.
         */
        ~Pila();
};



#endif /* PILA_H_ */
