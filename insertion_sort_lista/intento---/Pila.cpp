#include "Pila.h"
//verdaero
int Pila::Size() {
    return this->datos->Size;
}

void Pila::Push(char n) {
    this->datos->Add(n);
}

char Pila::Pop() {
    char peek = datos->Element_At(datos->Size - 1);
    datos->Delete_At(datos->Size - 1);
    return peek;
}

char Pila::Peek() {
    return datos->Element_At(datos->Size - 1);
}

