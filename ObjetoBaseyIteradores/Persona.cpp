#include "Persona.h"

Persona::Persona(string _nombre, string _cedula){
	nombre = _nombre;
	cedula = _cedula;
}

Persona::~Persona(){
}

string Persona::tostring() const{
	stringstream c;
	c << "Nombre: " << nombre<<" Cedula: " << cedula;
	return c.str();
}

