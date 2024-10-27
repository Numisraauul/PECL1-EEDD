#ifndef GESTOR_IMAGENES_HPP
#define GESTOR_IMAGENES_HPP

#include "Imagen.hpp"
#include "Lista.hpp"
#include "Pila.hpp"
#include "Cola.hpp"
#include <string>
#include <filesystem>

/**
 * Clase GestorImagenes que gestiona im�genes, permitiendo almacenarlas en una lista, pila o cola.
 */
class GestorImagenes {
public:
    /**
     * Constructor de la clase GestorImagenes.
     * @param directorio Directorio donde se guardar�n las im�genes.
     */
    GestorImagenes(const std::string &directorio);

    /**
     * Tipo de estructura en la que se almacenar�n las im�genes.
     */
    enum TipoEstructura { LISTA, PILA, COLA };

    /**
     * M�todo para agregar una imagen a una estructura espec�fica.
     * @param img Imagen a agregar.
     * @param tipo Tipo de estructura en la que se agregar� la imagen.
     */
    void agregarImagen(const Imagen &img, TipoEstructura tipo);

private:
    std::string directorio; ///< Directorio donde se guardar�n las im�genes.
    Lista<Imagen> listaImagenes; ///< Lista de im�genes.
    Pila pilaImagenes; ///< Pila de im�genes.
    Cola colaImagenes; ///< Cola de im�genes.
    int contadorImagenes; ///< Contador para generar nombres de archivos �nicos.

    /**
     * Genera un nombre de archivo �nico para una imagen.
     * @return Nombre de archivo generado.
     */
    std::string generarNombreArchivo();

    /**
     * Guarda una imagen en el directorio especificado.
     * @param img Imagen a guardar.
     * @param nombreArchivo Nombre del archivo donde se guardar� la imagen.
     */
    void guardarImagen(const Imagen &img, const std::string &nombreArchivo);
};

#endif // GESTOR_IMAGENES_HPP
