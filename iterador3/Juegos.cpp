#include "Juegos.h"

Juegos::Juegos(string _nombre, string _plata){
	nombre = _nombre;
	plataforma = _plata;
}

Juegos::~Juegos(){
}

string Juegos::tostring(){
	stringstream c;
	c << "--------------" << endl;
	c << "Nombre: " << nombre << endl;
	c << "Plataforma: " << plataforma << endl;
	c <<"---------------"<< endl;
	return c.str();
}
