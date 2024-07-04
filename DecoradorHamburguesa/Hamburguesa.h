#pragma once
#include"Combo.h"

class Hamburguesa:public Combo {

public:
	Hamburguesa(void);
	virtual~Hamburguesa();
	virtual double costo();
	virtual string tostring();

};
