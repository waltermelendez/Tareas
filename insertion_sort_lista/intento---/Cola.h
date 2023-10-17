#pragma once
#include "Lista.h"
//verdadero
class Cola
{
public:
    void Queue(char n);
    char Dequeue();
    char Top();
    int Size();
    
    Cola() {
        datos = new Lista();
    }
private:
    Lista* datos;
};

