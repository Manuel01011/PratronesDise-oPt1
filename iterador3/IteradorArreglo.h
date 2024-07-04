#pragma once
#include"Iterador.h"

class IteradorArreglo :public Iterador {
private:
	int i;
	int can;
	ObjetoBase** vector;
public:
	IteradorArreglo(int a,ObjetoBase* vec[]);
	virtual~IteradorArreglo();
	virtual bool MasElemntos();
	virtual ObjetoBase* proximoElemento();
	string tostring();
};