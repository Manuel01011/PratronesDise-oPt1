#pragma once
#include"Combo.h"

class Ingredientes :public Combo {//clase abstracta recordar que una clase abtrcta es una clase padre que su funcion es hereder atributos o metodos

protected:
	string nombre;
	Combo* ptrCombo;//puntero que va asia otro ingrediente...(lista enlazada sin nodos)

public:
	virtual~Ingredientes();

	virtual double costo() = 0;

	virtual string tostring() = 0 ;

};