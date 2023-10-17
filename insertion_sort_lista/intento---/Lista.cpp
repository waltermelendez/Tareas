#include "Lista.h"
#include "Nodos.h"
#include <iostream>
//verdadero
using namespace std;
void Lista::Add(int n) {
	// 1. Crear nodo
	Nodo* new_nodo = new Nodo();
	new_nodo->Valor = n;
	// 2. Validar si la lista esta vacia
	if (this->Size == 0) {
		this->Head = new_nodo;
		this->Tail = new_nodo;
	}
	else {
		this->Tail->Next = new_nodo;
		this->Tail = new_nodo;
	}
	// incrementar size
	this->Size += 1;
}

void Lista::Print() {
	Nodo* actual = Head;
	while (actual != nullptr) {

		std::cout << actual->Valor << std::endl;
		actual = actual->Next;
	}
}


int Lista::Element_At(int index) {
	if (index >= this->Size || index < 0) return -1;

	Nodo* actual = Head;
	while (index > 0) {
		actual = actual->Next;
		index--;
	}

	return actual->Valor;
}

void Lista::Remove(int n) {
	Nodo* actual = Head;
	Nodo* anterior = nullptr;
	while (actual != nullptr) {
		if (actual->Valor == n) {
			// procedemos a eliminar
			if (actual == Head) {
				Head = actual->Next;
			}
			else if (actual == Tail) {
				Tail = anterior;
			}
			else {
				anterior->Next = actual->Next;
			}

			// Reducimos Size
			this->Size--;

			// Borrar de memoria los objetos
			Nodo* borrar = actual;
			actual = actual->Next; // solo cambia actual, ya que anterior sigue siendo igual
			delete borrar;


		}
		else {
			//continuar
			anterior = actual;
			actual = actual->Next;

		}

	}
}

int Lista::Search(int n) {
	Nodo* actual = Head;
	int i = 0;
	while (actual != nullptr) {
		if (actual->Valor == n) return i;
		i++;
		actual = actual->Next;
	}
	return -1; // valor no encontrado
}

void Lista::Delete_At(int index) {
	if (index >= this->Size || index < 0) return;

	// borrar head?
	if (index == 0) {
		Nodo* aBorrar = Head;
		Head = Head->Next;
		Size--;
		delete aBorrar;
		return;
	}

	Nodo* actual = Head->Next;
	Nodo* anterior = Head;
	while (index > 1) {
		anterior = actual;
		actual = actual->Next;
		index--;
	}

	Nodo* aBorrar = actual;
	anterior->Next = actual->Next;
	Size--;
	delete aBorrar;

	if (index == Size - 1) // tail?
	{
		Tail = anterior;
	}
}

void Lista::insertion_sort() {
	Nodo* actual = Head;
	Nodo* siguiete = actual->Next;
	Nodo* temporal = siguiete->Next;;
	
		while (temporal != nullptr)
		{
			if (actual->Valor < siguiete->Valor) {
				actual = siguiete;
				
				siguiete = Head;

				
			}

			
			else if (siguiete->Valor < temporal->Valor) {
				siguiete;// = temporal;
				temporal = temporal->Next;
				
				if (siguiete->Valor < temporal->Valor) {

					siguiete = temporal;
					temporal = actual->Next;

					

				}

				

			}



		}
		



		
	

}
