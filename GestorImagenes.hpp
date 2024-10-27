#ifndef GESTOR_IMAGENES_HPP
#define GESTOR_IMAGENES_HPP

#include "Imagen.hpp"
#include "Lista.hpp"
#include "Pila.hpp"
#include "Cola.hpp"
#include <string>
#include <filesystem>

/**
 * Clase GestorImagenes que gestiona imágenes, permitiendo almacenarlas en una lista, pila o cola.
 */
class GestorImagenes {
public:
    /**
     * Constructor de la clase GestorImagenes.
     * @param directorio Directorio donde se guardarán las imágenes.
     */
    GestorImagenes(const std::string &directorio);

    /**
     * Tipo de estructura en la que se almacenarán las imágenes.
     */
    enum TipoEstructura { LISTA, PILA, COLA };

    /**
     * Método para agregar una imagen a una estructura específica.
     * @param img Imagen a agregar.
     * @param tipo Tipo de estructura en la que se agregará la imagen.
     */
    void agregarImagen(const Imagen &img, TipoEstructura tipo);

private:
    std::string directorio; ///< Directorio donde se guardarán las imágenes.
    Lista<Imagen> listaImagenes; ///< Lista de imágenes.
    Pila pilaImagenes; ///< Pila de imágenes.
    Cola colaImagenes; ///< Cola de imágenes.
    int contadorImagenes; ///< Contador para generar nombres de archivos únicos.

    /**
     * Genera un nombre de archivo único para una imagen.
     * @return Nombre de archivo generado.
     */
    std::string generarNombreArchivo();

    /**
     * Guarda una imagen en el directorio especificado.
     * @param img Imagen a guardar.
     * @param nombreArchivo Nombre del archivo donde se guardará la imagen.
     */
    void guardarImagen(const Imagen &img, const std::string &nombreArchivo);
};

#endif // GESTOR_IMAGENES_HPP
