#ifndef IMAGEN_HPP
#define IMAGEN_HPP

#include <opencv2/opencv.hpp>
#include <string>

/**
 * Enum para los tipos de filtros disponibles.
 */
enum FilterType {
    GRAYSCALE,
    BRIGHTNESS,
    CONTRAST
};

/**
 * Clase Imagen que encapsula operaciones de manipulación de imágenes.
 */
class Imagen {
private:
    cv::Mat img; ///< Matriz que almacena los datos de la imagen.

public:
    /**
     * Constructor que carga una imagen desde un archivo.
     * @param path Ruta del archivo de la imagen.
     */
    Imagen(const std::string& path);

    /**
     * Reduce la resolución de la imagen a 240 x 126 pixeles, y se mantiene la calidad.
     */
    void reduceResolution();

     /**
     * Aplica un filtro a la imagen.
     * @param filter Tipo de filtro a aplicar (GRAYSCALE, BRIGHTNESS, CONTRAST).
     * @param value Valor del filtro (solo se usa para BRIGHTNESS y CONTRAST).
     */
    void applyFilter(FilterType filter, double value = 1.0);

    /**
     * Rota la imagen en un ángulo especificado.
     * @param angle Ángulo de rotación en grados.
     */
    void rotate(double angle);

    /**
     * Guarda la imagen en un archivo.
     * @param path Ruta del archivo donde se guardará la imagen.
     */
    void save(const std::string& path);

    /**
     * Devuelve la matriz de la imagen.
     * @return Matriz de la imagen.
     */
    cv::Mat getMat() const;
};

#endif // IMAGEN_HPP_INCLUDED
