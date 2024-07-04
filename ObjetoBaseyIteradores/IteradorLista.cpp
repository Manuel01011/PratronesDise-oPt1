#include "IteradorLista.h"

IteradorLista::IteradorLista(Nodo* _nodo){
	actual = _nodo;
	Iterador;
}

IteradorLista::~IteradorLista(){

}

bool IteradorLista::masElementos() const{

	return (actual != nullptr); //deja de iterar cuando actual ve a nullptr
}

ObjetoBase* IteradorLista::proximoElemento(){

	ObjetoBase* aux = nullptr;//variable comodin
	if (masElementos()) {
		aux = actual->getObjetoBase();
		actual = actual->getNodoSiguiente();//actual se pasa de nodo
	}
	return aux;
}

string IteradorLista::tostring(){
	return "";
}
