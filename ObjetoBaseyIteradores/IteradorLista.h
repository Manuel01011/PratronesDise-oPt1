#pragma once
#include"Iterador.h"
#include"Nodo.h"

class IteradorLista :public Iterador {

private:
	Nodo* actual;//itera sobre la lista y asi poder recorrerla
public:

	IteradorLista(Nodo* _nodo);

	virtual~IteradorLista();

	virtual bool masElementos() const;

	virtual ObjetoBase* proximoElemento();

	virtual string tostring();
};