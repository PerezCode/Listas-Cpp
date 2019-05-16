#include <iostream>
#include <stdlib.h>
#include "Nodo.h"
#include "Lista.h"
#include "Windows.h" 
#include <conio.h>

using namespace std;

char menu() {
	char Opcion = ' ';
	do {
		cout << "\t\t|MENU|\n";
		cout << " 1. Agregar\n";
		cout << " 2. Mostrar\n ";
		cout << "3. Buscar\n";
		cout << " 4. Eliminar\n";
		cout << " 5. Reemplazar\n";
		cout << " 6. Salir\n\n";
		cout << " Opcion : ";							//MENU
		cin >> Opcion;
		if ((Opcion < '1') or (Opcion > '6')) {
			system("CLS");
			cout << " Opcion Invalida,Sigue intentando :'( \n";

			system("PAUSE");
			system("CLS");
		}

	} while ((Opcion < '1') or (Opcion > '6'));
	return Opcion;
}

int main() {
	system("COLOR 0b");

	char Opcion = ' ';
	Nodo* NuevoNodo = NULL, *Temp = NULL;
	Lista* Cadena = new Lista();
	int Numero = 0;

	do {

		Opcion = menu();
		system("CLS");

		switch (Opcion) {
		case '1':
			cout << " \t\tAgregar\n\n";
			NuevoNodo = new Nodo();
			cout << " Digite el nuevo numero: ";						//VA AGREGAR UN NUEVO NODO Y EL DATO DIGITADO SE GUARDARA EN EL NODO CREADO Y LOS IRA ALMACENANDO
			cin >> Numero;
			NuevoNodo->Set_dato(Numero);
			Cadena->Agregar(NuevoNodo);

			cout << " Numero almacenado Correctamente\n" << endl;
			break;

		case '2':
			cout << " \t\tMostrar\n\n";
			Temp = Cadena->Get_cabeza();

			while (Temp != NULL) {
				cout << " [" << Temp->Get_dato() << "]" << " ";
				Temp = Temp->Get_liga();
			}
			break;

		case '3':
			cout << " \t\tBuscar\n\n";
			cout << " Digite el numero que desea buscar: ";
			cin >> Numero;
			Temp = Cadena->Buscar(Numero);

			if (Temp == NULL) {
				cout << " NO SE ENCONTRO EN TODA LA LISTA :(";
			} else if(Temp->Get_dato() == Numero) {
				cout << " El numero fue encontrado Exitosamente :) ";
			}

			break;

		case '4':
			cout << " \t\tEliminar\n\n";
			cout << " Digite el numero que desea eliminar: ";
			cin >> Numero;
			Temp = Cadena->Buscar(Numero);
			if (Temp != NULL) {
				Cadena->Eliminar(Numero);
				cout << " El numero fue eliminado Exitosamente ";
			}
			else {
				cout << " El numero no fue Encontrado :( ";
			}
			break;

		case '5':
			cout << "\t\tReemplazar\n\n";
			cout << " Digite el numero a buscar para ser reemplazado: ";
			cin >> Numero;
			Cadena->reemplazar(Numero);
			break;

		case '6':
			system("COLOR 0A");
			cout << " \t\tFin de la aplicacion\n\t\t    THANKS!! :)\n ";
			break;
		default:
			break;

		}
		cout << "\n";
		system("PAUSE");
		system("CLS");
	} while (Opcion != '6');

	cout << " ___________                                   .__   "; cout << "          .___           .__    .___" << endl;
	cout << " \\_   _____/ _____ _____    ____  __ __   ____ |  | "; cout << "         __| _/____ ___  _|__| __| _/" << endl;
	cout << "  |    __)_ /     \\\\__  \\  /    \\|  |  \\_/ __ \\|  |"; cout << "         / __ |\\__  \\\\  \\/ /  |/ __ | " << endl;
	cout << "  |        \\  Y Y  \\/ __ \\|   |  \\  |  /\\  ___/|  |__"; cout << "      / /_/ | / __ \\\\   /|  / /_/ | " << endl;
	cout << " /_______  /__|_|  (____  /___|  /____/  \\___  >____/"; cout << "      \\____ |(____  /\\_/ |__\\____ | " << endl;
	cout << "         \\/      \\/     \\/     \\/            \\/      "; cout << "           \\/     \\/             \\/ " << endl;

	system("PAUSE");
	system("CLS");
	system("color 0c");
	cout << endl << endl << endl << endl << endl;
	cout << "\t\t\t\t\t	      ..ed$$$$$$$ee." << endl;
	cout << "\t\t\t\t\t	   %&&z$$*.$$*$$F**$$e." << endl;
	cout << "\t\t\t\t\t        d$$      .$$´´^$$c    ^*$$." << endl;
	cout << "\t\t\t\t\t      z$$       4$$    ^$$c     *$b." << endl;
	cout << "\t\t\t\t\t     d$P       z$$      ^$$L     ^$$." << endl;
	cout << "\t\t\t\t\t   J$P       z$$         ^$$b     ^$$" << endl;
	cout << "\t\t\t\t\t$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$F" << endl;
	cout << "\t\t\t\t\t   4$$     J$$              $$b    4$$" << endl;
	cout << "\t\t\t\t\t   ^$$    d$$                *$$   4$$" << endl;
	cout << "\t\t\t\t\t    $$L  d$$                  *$$  $$%" << endl;
	cout << "\t\t\t\t\t    ^$$cd$$                    *$$d$P" << endl;
	cout << "\t\t\t\t\t     ^$$$$                     *$$P" << endl;
	cout << "\t\t\t\t\t	*$$c                    .d$$" << endl;
	cout << "\t\t\t\t\t         ^*$$bc.             .e$$P" << endl;
	cout << "\t\t\t\t\t             ^*$$$$$$eee$$$$$* " << endl;
	
	
	
	
	system("PAUSE");
	return 0;
}