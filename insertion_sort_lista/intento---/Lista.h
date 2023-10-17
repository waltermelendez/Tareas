#pragma once
#include "Nodos.h"
//verdaero
class Lista
{
public:
	Nodo* Head;
	Nodo* Tail;
	int Size;
	void Add(int n);
	void Remove(int n);
	void Delete_At(int position);
	int Search(int n); // Return -1 si el elemento no existe, o el indice caso contrario
	void Print();
	int Element_At(int index);
	void insertion_sort();
	

	Lista() {
		Head = nullptr;
		Tail = nullptr;
		Size = 0;
	}

};