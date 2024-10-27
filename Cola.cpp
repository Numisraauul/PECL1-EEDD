#include "Cola.hpp"

void Cola::enqueue(const Imagen &img) {

    elementos.push_back(img);

}

Imagen Cola::dequeue() {

    Imagen img = elementos.front();
    elementos.pop_front();
    return img;

}

bool Cola::isEmpty() const {

    return elementos.empty();

}
