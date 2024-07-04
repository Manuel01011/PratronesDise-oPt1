#include "ColeccionLista.h"

ColeccionLista::ColeccionLista(){
	n = 0;
	primero = nullptr;
	Ultimo = nullptr;
}

ColeccionLista::~ColeccionLista(){
	delete primero;
	delete Ultimo;
}

void ColeccionLista::agregar(ObjetoBase* obj){

	Nodo* aux = new Nodo(obj,nullptr);

	if (estaVacio()) {
		primero = Ultimo = aux;
	}
	else {
		Ultimo->setSiguiente(aux);
		Ultimo = aux;
	}
	n++;
}

ObjetoBase* ColeccionLista::obtener(int pos) const{
	ObjetoBase* aux = nullptr; //comodin
	if (pos < n) {
		int p = 0;
		Nodo* actual = primero;
		while (p < pos){
			p++;
			actual = actual->getNodoSiguiente();
		}
		aux = actual->getObjetoBase();
	}

	return aux;
}

int ColeccionLista::numeroElementos() const{
	return n;
}

bool ColeccionLista::estaVacio() const{
	return primero == NULL;
}

Iterador* ColeccionLista::obtenerIterador(){
	return new IteradorLista(primero);
}

string ColeccionLista::tostring(){
	return "";
}
