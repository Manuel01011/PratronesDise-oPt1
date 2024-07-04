#include "Nodo.h"

Nodo::Nodo(ObjetoBase* obj, Nodo* sig){
	ObjetoBasePTR = (ObjetoBase*)obj;
	siguiente = sig;
}

Nodo::~Nodo(){
	
}

ObjetoBase* Nodo::getObjetoBase() const{
	return ObjetoBasePTR;
}

Nodo* Nodo::getNodoSiguiente() const{
	return siguiente;
}

void Nodo::setSiguiente(Nodo* _sig){
	siguiente = _sig;
}

void Nodo::setObjetoBasePTR(ObjetoBase* _obj){
	ObjetoBasePTR = _obj;
}

string Nodo::tostring(){

	return "";
}
