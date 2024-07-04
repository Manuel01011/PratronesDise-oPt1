#include "Tomate.h"

Tomate::Tomate(Combo* _combo) {
	ptrCombo = _combo;
	nombre = "Tomate";
	precio = 200;
}

Tomate::~Tomate() {

}

double Tomate::costo() {

	return precio + ptrCombo->costo();
}

string Tomate::tostring() {
	stringstream c;

	c << "Nombre del pruducto ananido: " << nombre << " y su precio es : " << precio << endl;
	c << "Su combo es: " << ptrCombo->tostring();

	return c.str();
}
