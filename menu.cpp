#include "Menu.hpp"

Menu::Menu() : gestor("imagenes_guardadas") {}

void Menu::mostrarMenu() {
    int opcion;
    do {
        std::cout << "Seleccione una opci�n del men�:\n";
        std::cout << "1. Rotaci�n Intercalada\n";
        std::cout << "2. Salir\n";
        std::cin >> opcion;

        switch (opcion) {
            case 1:
                rotacionIntercalada();
                break;
            case 2:
                std::cout << "Saliendo...\n";
                break;
            default:
                std::cout << "Opci�n no v�lida. Intente de nuevo.\n";
        }
    } while (opcion != 2);
}

void Menu::rotacionIntercalada() {
    std::string path;
    std::cout << "Ingrese la ruta de la imagen: ";
    std::cin >> path;
    std::cout << "Ingrese el �ngulo de rotaci�n (90, 180, 270, 360): ";
    std::cin >> angle;

    try {
        Imagen img(path);
        for (int angle : {90, 180, 270, 360}) {
            img.rotate(angle);
            gestor.agregarImagen(img, GestorImagenes::LISTA);
        }
        std::cout << "Im�genes rotadas y guardadas exitosamente.\n";
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
}
