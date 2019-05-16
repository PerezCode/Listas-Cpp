#pragma once
#include "Nodo.h"
using namespace std;

class Lista {

private:
	Nodo* cabeza;

public:

	Lista();
	//METODOS PARA HACER EN UNA LISTA

	void Set_cabeza(Nodo*);
	Nodo* Get_cabeza();
	Nodo* Get_ultimo();
	void Agregar(Nodo*);
	Nodo* Buscar(int);
	void Eliminar(int);
	void reemplazar(int);

	~Lista();
};