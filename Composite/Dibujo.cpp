#include "Dibujo.h"

Dibujo::Dibujo(){
	nombre = "";
	precio = 300;
}

Dibujo::Dibujo(string _nombre, double _precio){
	nombre = _nombre;
	precio = _precio;

}

double Dibujo::obtenerPrecio()
{
	return precio;
}

string Dibujo::tostring(){
	stringstream c;

	c << "Dibujo: " << nombre << " y valgo: " << precio << " colones" << endl;

	return c.str();
}

void Dibujo::agregarComponente(Componente* a){

}
