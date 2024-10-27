#ifndef PILA_HPP
#define PILA_HPP

#include "Imagen.hpp"
#include <array>

/**
 * Clase Pila que implementa una pila de im�genes utilizando un array de la STL.
 */
class Pila {
public:
    /**
     * Constructor de la clase Pila.
     * Inicializa la pila vac�a.
     */
    Pila();

    /**
     * Inserta una imagen en la pila.
     * @param img Imagen a insertar en la pila.
     */
    void push(const Imagen &img);

    /**
     * Elimina y devuelve la imagen en la cima de la pila.
     * @return Imagen en la cima de la pila.
     */
    Imagen pop();

    /**
     * Verifica si la pila est� vac�a.
     * @return true si la pila est� vac�a, false en caso contrario.
     */
    bool isEmpty() const;

    /**
     * Verifica si la pila est� llena.
     * @return true si la pila est� llena, false en caso contrario.
     */
    bool isFull() const;

private:
    static const int MAX_SIZE = 100; ///< Tama�o m�ximo de la pila.
    std::array<Imagen, MAX_SIZE> elementos; ///< Array que almacena los elementos de la pila.
    int top; ///< �ndice del elemento en la cima de la pila.
};

#endif // PILA_HPP
