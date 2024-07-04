#include "Composite.h"

Composite::Composite(){
	tam = 10;
	cant = 0;
	vec = new Componente*[tam];
	for (int i = 0; i < tam; i++){
		vec[i] = nullptr;
	}

}

Composite::~Composite(){
	for (int i = 0; i < tam; i++) {
		delete vec[i];
		delete[] vec;
	}
}

string Composite::tostring(){
	stringstream c;

	for (int i = 0; i < cant; i++) {
		c << vec[i]->tostring() << endl;;
	}

	return c.str();
}


