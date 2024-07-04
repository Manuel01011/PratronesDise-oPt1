#pragma once
#include"Ingredientes.h" //clase decorador

class TortaCarne :public Ingredientes {

public:
	TortaCarne(Combo* _combo);

	virtual~TortaCarne();

	virtual double costo();

	virtual string tostring();

};