#include "IteradorArreglo.h"

IteradorArreglo::IteradorArreglo(int a, ObjetoBase* vec[]){
	can = a;
	i = 0;
	vector = vec;
	Iterador;
}

IteradorArreglo::~IteradorArreglo(){
}

bool IteradorArreglo::MasElemntos(){
	return (i<can);
}

ObjetoBase* IteradorArreglo::proximoElemento(){
	ObjetoBase* aux = nullptr;
	if (MasElemntos()) {
		aux = vector[i++];
	}
	return aux;
}

string IteradorArreglo::tostring(){

	return "";
}
