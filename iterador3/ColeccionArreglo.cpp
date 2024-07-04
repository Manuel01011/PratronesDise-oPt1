#include "ColeccionArreglo.h"

ColeccionArreglo::ColeccionArreglo(int a){
	cant = 0;
	tamano = a;
	vector = new ObjetoBase * [a];
}

ColeccionArreglo::~ColeccionArreglo(){

}

void ColeccionArreglo::agregar(ObjetoBase* a){
	if (cant < tamano) {
		vector[cant++] = a;
	}
}

ObjetoBase* ColeccionArreglo::optener(int a){
	if (a >= 0 && a < cant) {
		return vector[a];
	}
}

Iterador* ColeccionArreglo::optenerIterador(){
	return new IteradorArreglo(cant,vector);
}

bool ColeccionArreglo::estavacia(){
	return (cant == 0);
}

string ColeccionArreglo::tostring() {
	stringstream c;

	Iterador* i = optenerIterador();
	while (i->MasElemntos()){
		c << i->proximoElemento()->tostring() << endl;
		if (i->MasElemntos());
	}
	return c.str();
}
