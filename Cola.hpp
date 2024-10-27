#ifndef COLA_HPP
#define COLA_HPP

#include "Imagen.hpp"
#include <queue>

/**
 * Clase Cola que implementa una cola de im�genes utilizando una cola de la STL.
 */
class Cola {
public:
    /**
     * Inserta una imagen en la cola.
     * @param img Imagen a insertar en la cola.
     */
    void enqueue(const Imagen &img);

    /**
     * Elimina y devuelve la imagen al frente de la cola.
     * @return Imagen al frente de la cola.
     */
    Imagen dequeue();

    /**
     * Verifica si la cola est� vac�a.
     * @return true si la cola est� vac�a, false en caso contrario.
     */
    bool isEmpty() const;

private:
    std::queue<Imagen> elementos; ///< Cola que almacena los elementos.
};

#endif // COLA_HPP
