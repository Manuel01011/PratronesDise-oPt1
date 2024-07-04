#include "Caracter.h"

Caracter::Caracter(){
	nombre = "*";
    precio = 200;
}

Caracter::Caracter(string _nombre, double _precio) {
		nombre = _nombre;
		precio = _precio;
}

double Caracter::obtenerPrecio(){
	return precio;
}

string Caracter::tostring(){
	stringstream c;

	c << nombre << " y valgo: " << precio << " colones" << endl;

	return c.str();
}

void Caracter::agregarComponente(Componente* a){

}
