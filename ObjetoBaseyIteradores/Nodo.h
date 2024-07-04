#pragma once
#include"Base.h"

class Nodo{

private:
	ObjetoBase* ObjetoBasePTR;//pasajero del nodo
	Nodo* siguiente;  //puntero de enlace

public:

	Nodo(ObjetoBase* obj,Nodo* sig);

	virtual~Nodo();

	ObjetoBase* getObjetoBase()const;

	Nodo* getNodoSiguiente()const;

	void setSiguiente(Nodo* _sig);

	void setObjetoBasePTR(ObjetoBase* _obj);

	string tostring();
};