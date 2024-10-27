#include "Lista.hpp"

void Lista::add(const Imagen &img) {

    elementos.push_back(img);

}

void Lista::remove(const Imagen &img) {

    elementos.remove(img);

}

bool Lista::contains(const Imagen &img) const {

    return std::find(elementos.begin(), elementos.end(), img) != elementos.end();

}
