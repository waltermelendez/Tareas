#pragma once
#include "Lista.h"
//verda
class Pila
{
public:
    void Push(char a);
    char Pop();
    char Peek();
    int Size();
    
    Pila() {
        datos = new Lista();
    }

private:
    Lista* datos;
};

