#include "Lista.h"
#include <iostream>
using namespace std;

Lista::Lista()
{
	cabeza = NULL;
}

void Lista::Set_cabeza(Nodo* c) {			//ASIGNANDO CABEZA || PUNTA 
	cabeza = c;
}

Nodo* Lista::Get_cabeza() {
	return cabeza;
}

Nodo* Lista::Get_ultimo() {
	Nodo* ultimo = Get_cabeza();
	while (ultimo->Get_liga() != NULL) {
		ultimo = ultimo->Get_liga();		/*SI EL NODO ES DIFERENTE NULL ES PORQUE ABRA UN SIGUIENTE Y ESE SE ASIGNARA COMO EL ULTIMO Y LO RETORNARA */
	}
	return ultimo;
}

void Lista::Agregar(Nodo* Nuevo) {
	if (Get_cabeza() == NULL) { /* VERIFICAMOS SI LA LISTA EXISTE, EN CASO DE QUE NO EXISTA LE ADD UN NUEVO NODO Y LO ASIGNAMOS COMO LA CABEZA */
			Set_cabeza(Nuevo);
			cout << "Se agregó la cabeza"<<endl;
	}
	else {
		Get_ultimo()->Set_liga(Nuevo);		/*SI LA LISTA EXISTE VAMOS A INVOCAR EL ULTIMO NODO Y LO LIGAREMOS CON EL NUEVO NODO ESTO NOS INDICA QUE EL NUEVO
											NODO SERA EL ULTIMO*/
		cout << "Se agregó un nuevo nodo"<<endl;
	}
}

Nodo* Lista::Buscar(int Numero) {
	Nodo* Busqueda = Get_cabeza(); /* VAMOS ASIGNAR A BUSQUEDA COMO LA CABEZA PARA PODER EMPEZAR A RECORRER LA LISTA */

		while ((Busqueda != NULL) and (Busqueda->Get_dato() != Numero)) { /* SI LA LISTA EXISTE Y EL DATO DEL NODO EN EL CUAL ESTAMOS PARADOS SEA DIFERENTE AL QUE BUSCAMOS ENTRARA AL WHILE */
				
				/* AVANZAMOS */
				Busqueda = Busqueda->Get_liga(); 
		}

		return Busqueda;

}

void Lista::Eliminar(int Numero) {
	Nodo* Busqueda = Get_cabeza();
	Nodo* anterior = NULL;
	if (Busqueda->Get_dato() == Numero) {
		/* SI EL NUMERO QUE BUSCAMOS ESTA EN CABEZA ENTONCES ASIGNAREMOS UNA NUEVA CABEZA QUE SERA EL SIGUIENTE NODO
		OSEA LA LIGA DE LA CABEZA INICIAL */
		Set_cabeza(Get_cabeza()->Get_liga()); 

	}
	else {
		/* SI LA LISTA EXISTE Y EL DATO QUE BUSCAMOS ES DIFERENTE AL DEL NODO EN EL CUAL ESTAMOS PARADOS ENTRARA AL WHILE */
		while ((Busqueda != NULL) and (Busqueda->Get_dato() != Numero)) {

			anterior = Busqueda;
			Busqueda = Busqueda->Get_liga();
		}
		if (Busqueda != NULL) {
			anterior->Set_liga(Busqueda->Get_liga());
		}
	}
	delete Busqueda;
}

void Lista::reemplazar(int Numero) {

	Nodo* Busqueda = Get_cabeza();
	int NewNumber;
	bool banderita = true;
	int i = 1;
	while (Busqueda != NULL){
		
		if (Busqueda->Get_dato() == Numero) {
			if (i == 1) {
			cout << " El numero que ingresaste se encontro una vez"<<endl;
			} else {
			cout <<" El dato se encontro de nuevo"<<endl;
			}

			cout << " Digite el nuevo dato: ";
			cin >> NewNumber;
			Busqueda->Set_dato(NewNumber);
			banderita = false;
			i++;
		}
		Busqueda = Busqueda->Get_liga();
	}
	
	if (banderita) {
		cout << " No se encontro el dato en la lista :'(";
	}

}

Lista::~Lista()
{
}