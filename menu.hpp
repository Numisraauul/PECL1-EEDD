#ifndef MENU_HPP
#define MENU_HPP

#include "GestorImagenes.hpp"
#include "Imagen.hpp"
#include <iostream>

// Clase Menu que maneja la interfaz de usuario para gestionar imágenes
class Menu {
public:
    // Constructor de la clase Menu
    Menu();

    // Muestra el menú de opciones al usuario
    void mostrarMenu();

    // Realiza una rotación intercalada de las imágenes
    void rotacionIntercalada();

private:
    // Objeto gestor de imágenes para manejar las operaciones con imágenes
    GestorImagenes gestor;

    // Carga una imagen utilizando el gestor de imágenes
    void cargarImagen();
};

#endif // MENU_HPP
