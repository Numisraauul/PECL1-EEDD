#ifndef LISTA_HPP
#define LISTA_HPP

#include <list>
#include "Imagen.hpp"

/**
 * Clase Lista que implementa una lista de imágenes utilizando una lista enlazada.
 */
class Lista {
private:
    std::list<Imagen> elementos; ///< Lista que almacena los elementos de la lista.

public:
    /**
     * Añade una imagen a la lista.
     * @param img Imagen a añadir a la lista.
     */
    void add(const Imagen &img);

    /**
     * Elimina una imagen de la lista.
     * @param img Imagen a eliminar de la lista.
     */
    void remove(const Imagen &img);

    /**
     * Verifica si una imagen está contenida en la lista.
     * @param img Imagen a verificar.
     * @return true si la imagen está en la lista, false en caso contrario.
     */
    bool contains(const Imagen &img) const;
};

#endif // LISTA_HPP_INCLUDED
