#pragma once
#include"Componente.h"

class Composite :public Componente {
protected:
	Componente** vec;
	int cant;
	int tam;

public:
	Composite();
	virtual~Composite();
	virtual string tostring()=0;//M.V.P
	virtual void agregarComponente(Componente* a)=0;

	//Composite(Composite& a);
	//virtual Composite& operator=(Composite& a);

};