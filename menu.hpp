#ifndef MENU_HPP
#define MENU_HPP

#include "GestorImagenes.hpp"
#include "Imagen.hpp"
#include <iostream>

// Clase Menu que maneja la interfaz de usuario para gestionar im�genes
class Menu {
public:
    // Constructor de la clase Menu
    Menu();

    // Muestra el men� de opciones al usuario
    void mostrarMenu();

    // Realiza una rotaci�n intercalada de las im�genes
    void rotacionIntercalada();

private:
    // Objeto gestor de im�genes para manejar las operaciones con im�genes
    GestorImagenes gestor;

    // Carga una imagen utilizando el gestor de im�genes
    void cargarImagen();
};

#endif // MENU_HPP
