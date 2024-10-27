#include "GestorImagenes.hpp"
#include <fstream>

GestorImagenes::GestorImagenes(const std::string &directorio) : directorio(directorio), contadorImagenes(0) {
    std::filesystem::create_directories(directorio);
}

void GestorImagenes::agregarImagen(const Imagen &img, TipoEstructura tipo) {
    std::string nombreArchivo = generarNombreArchivo();
    guardarImagen(img, nombreArchivo);

    switch (tipo) {
        case LISTA:
            listaImagenes.insertar(img);
            break;
        case PILA:
            pilaImagenes.push(img);
            break;
        case COLA:
            colaImagenes.enqueue(img);
            break;
    }
}

std::string GestorImagenes::generarNombreArchivo() {
    return "img" + std::to_string(++contadorImagenes) + ".jpg";
}

void GestorImagenes::guardarImagen(const Imagen &img, const std::string &nombreArchivo) {
    std::ofstream archivo(directorio + "/" + nombreArchivo, std::ios::binary);
    archivo.write(reinterpret_cast<const char*>(img.obtenerDatos()), img.obtenerTamano());
}
