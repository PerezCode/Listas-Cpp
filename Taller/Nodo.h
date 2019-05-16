#pragma once
#include <string>
using namespace std;

class Nodo {

private:
	int dato;
	Nodo* liga;
public:
	Nodo();

	void Set_dato(int);
	void Set_liga(Nodo*);
	int Get_dato();
	Nodo* Get_liga();


	~Nodo();

};