#include "Oracion.h"

Oracion::Oracion(string _descripcion, double prec) {
	descripcion = _descripcion;
	_precio = prec;
}

Oracion::~Oracion() {

}

string Oracion::ObtenerDescripcion() {
	return descripcion;
}

double Oracion::obtenerPrecio() {
	double r = _precio;
	for (int i = 0; i < cant; i++) {
		r += vec[i]->obtenerPrecio();
	}
	return r;
}

void Oracion::agregarComponente(Componente* a) {
	if (cant < tam) {
		vec[cant++] = a;
	}
}

string Oracion::tostring() {
	stringstream c;

	c << "Frase: " << descripcion << ", valor: " << _precio << " colones" << endl;
	for (int i = 0; i < cant; i++) {
		c << vec[i]->tostring() << endl;
	}
	return c.str();
}
