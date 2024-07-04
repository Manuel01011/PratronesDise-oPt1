#pragma once
#include"Base.h"

class Iterador :public ObjetoBase {

public:
	Iterador() {

	}
	virtual~Iterador() {

	}
	virtual bool masElementos() const = 0;
	virtual ObjetoBase* proximoElemento() = 0;

	virtual string tostring() const {
			return "";
	}
};