#pragma once
#include"Ingredientes.h" //clase decorador

class Tomate :public Ingredientes {

public:
	Tomate(Combo* _combo);

	virtual~Tomate();

	virtual double costo();

	virtual string tostring();

};