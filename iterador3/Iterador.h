#pragma once
#include"ObjetoBase.h"

class Iterador :public ObjetoBase {
public:
	virtual bool MasElemntos() = 0;
	virtual ObjetoBase* proximoElemento() = 0;
	string tostring() {
		return "";
	}
};