#include "Queso.h"

Queso::Queso(Combo* _combo) {
	ptrCombo = _combo;
	nombre = "Queso";
	precio = 200;
}

Queso::~Queso() {

}

double Queso::costo() {

	return precio + ptrCombo->costo();
}

string Queso::tostring() {
	stringstream c;

	c << "Nombre del pruducto ananido: " << nombre << " y su precio es : " << precio << endl;
	c << "Su combo es: " << ptrCombo->tostring();

	return c.str();
}
