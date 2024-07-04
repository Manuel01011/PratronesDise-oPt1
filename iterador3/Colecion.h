#pragma once
#include"ObjetoBase.h"
#include"Iterador.h"

class Coleccion:public ObjetoBase {

public:

	virtual void agregar(ObjetoBase* a)=0;
	virtual ObjetoBase* optener(int a) = 0;
	virtual Iterador* optenerIterador()=0;
	virtual bool estavacia() = 0;
	virtual string tostring()=0;
};