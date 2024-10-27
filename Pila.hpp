#ifndef PILA_HPP
#define PILA_HPP

#include "Imagen.hpp"
#include <array>

/**
 * Clase Pila que implementa una pila de imágenes utilizando un array de la STL.
 */
class Pila {
public:
    /**
     * Constructor de la clase Pila.
     * Inicializa la pila vacía.
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
     * Verifica si la pila está vacía.
     * @return true si la pila está vacía, false en caso contrario.
     */
    bool isEmpty() const;

    /**
     * Verifica si la pila está llena.
     * @return true si la pila está llena, false en caso contrario.
     */
    bool isFull() const;

private:
    static const int MAX_SIZE = 100; ///< Tamaño máximo de la pila.
    std::array<Imagen, MAX_SIZE> elementos; ///< Array que almacena los elementos de la pila.
    int top; ///< Índice del elemento en la cima de la pila.
};

#endif // PILA_HPP
