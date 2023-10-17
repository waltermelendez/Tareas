#include "Cola.h"
//veradero
int Cola::Size() {
    return this->datos->Size;
}

void Cola::Queue(char n) {
    this->datos->Add(n);
}

char Cola::Dequeue() {
    // Recupero el dato de la primera posicion
    if (datos->Size > 0) {
        char valor = this->datos->Element_At(0);
        Nodo* actual = datos->Head;
        this->datos->Head = actual->Next;
        delete actual; // eliminar de memoria
        this->datos->Size--;
        return valor;
    }
    else {
        return -1;
    }
}

char Cola::Top() {
    return datos->Element_At(0);
}


