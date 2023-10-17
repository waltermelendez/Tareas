

#include <iostream>
#include "Lista.h"
#include"Nodos.h"
#include"Cola.h"
#include"Pila.h"
using namespace std;
int main()
{
	
	Lista* lista = new Lista();
	
	/*lista->Add(1);
	lista->Add(23);
	lista->Add(5);
	lista->Add(24);*/
	
	lista->insertion_sort();
	
	
	
	lista->Print();

	return 0;
}
