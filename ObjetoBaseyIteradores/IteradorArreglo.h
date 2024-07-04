#pragma once
#include"Iterador.h"

class IteradorArreglo :public Iterador {

private:
	int i; //es el sub-indice que pasa de elemento en elemento
	int cant;//numeros de elementos validos en el contenedor 
	ObjetoBase** vect; //visualizar el vector del contenedor 
public:

	IteradorArreglo(int _cant,ObjetoBase* []); //le llega la cantidad de objetos validos y el vector del contenedor

	virtual~IteradorArreglo();

	virtual bool masElementos()const;

	virtual ObjetoBase* proximoElemento();

	virtual string tostring();
};