#include "Hamburguesa.h"

Hamburguesa::Hamburguesa(void){
	precio = 600;
}

Hamburguesa::~Hamburguesa(){

}

double Hamburguesa::costo(){

	return precio;
}

string Hamburguesa::tostring(){
	stringstream c;
	c << "Hamburguesa: " << endl;
	c << "valor: " << costo() << endl;
	return c.str();
}
