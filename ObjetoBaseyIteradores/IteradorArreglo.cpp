#include "IteradorArreglo.h"

IteradorArreglo::IteradorArreglo(int _cant, ObjetoBase* v[]){
	i = 0;
	cant = _cant;
	vect = v;
	Iterador;
}

IteradorArreglo::~IteradorArreglo(){

}

bool IteradorArreglo::masElementos() const{
	return i < cant; //si llega a una posicion mas alla de la cantidad se sale
}

ObjetoBase* IteradorArreglo::proximoElemento(){
	
	ObjetoBase* aux = nullptr; //variable comodin
	if (masElementos()) {
		aux = vect[i++];
	}
	return aux;
}

string IteradorArreglo::tostring()
{
	return "";
}
