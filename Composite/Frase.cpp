#include "Frase.h"

Frase::Frase(string _descripcion, double prec){
	descripcion = _descripcion;
	_precio = prec;
}

Frase::~Frase(){

}

string Frase::ObtenerDescripcion(){
	return descripcion;
}

double Frase::obtenerPrecio(){
	double r = _precio;
	for (int i = 0; i < cant; i++){
		r += vec[i]->obtenerPrecio();
	}
	return r;
}

void Frase::agregarComponente(Componente* a){
	if (cant < tam) {
		vec[cant++] = a;
	}
}

string Frase::tostring(){
	stringstream c;

	c << "Frase: " << descripcion << ", valor: " << _precio<<" colones" << endl;
	c << "Es: ";
	for (int i = 0; i < cant; i++){
		c << vec[i]->tostring()<<" ";
	}
	return c.str();
}
