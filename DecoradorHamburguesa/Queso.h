#pragma once
#include"Ingredientes.h" //clase decorador

class Queso :public Ingredientes {

public:
	Queso(Combo* _combo);

	virtual~Queso();

	virtual double costo();

	virtual string tostring();

};