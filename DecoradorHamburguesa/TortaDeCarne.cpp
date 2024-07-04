#include "TortaDeCarne.h"

TortaCarne::TortaCarne(Combo* _combo){
	ptrCombo = _combo;
	nombre = "Torta de Carne";
	precio = 500;
}

TortaCarne::~TortaCarne(){
	
}

double TortaCarne::costo(){

	return precio + ptrCombo->costo();
}

string TortaCarne::tostring(){
	stringstream c;

	c << "Nombre del pruducto ananido: "<<nombre<<" y su precio es : "<<precio << endl;
	c << "Su combo es: " << ptrCombo->tostring();

	return c.str();
}
