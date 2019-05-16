#include "Nodo.h"

//ASIGNANDO VALORES

Nodo::Nodo()
{
	dato = 0;
	liga = NULL;
}
void Nodo::Set_dato(int d) {

	dato = d;
}

void Nodo::Set_liga(Nodo* l) {
	liga = l;
}

int Nodo::Get_dato() {
	return dato;
}

Nodo* Nodo::Get_liga() {
	return liga;
}

Nodo::~Nodo()
{
}