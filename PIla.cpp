#include "Pila.hpp"

Pila::Pila() : top(-1) {}

void Pila::push(const Imagen &img) {
    if (!isFull()) {
        elementos[++top] = img;
    } else {
        throw std::overflow_error("Pila llena");
    }
}

Imagen Pila::pop() {
    if (!isEmpty()) {
        return elementos[top--];
    } else {
        throw std::underflow_error("Pila vacía");
    }
}

bool Pila::isEmpty() const {
    return top == -1;
}

bool Pila::isFull() const {
    return top == MAX_SIZE - 1;
}
