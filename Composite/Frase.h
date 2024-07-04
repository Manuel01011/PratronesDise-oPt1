#pragma once
#include"Composite.h"

class Frase :public Composite {
private:
	string descripcion;
	double _precio;
public:
	Frase(string = "", double = 0.0);
	virtual~Frase();
	virtual string ObtenerDescripcion();
	virtual double obtenerPrecio();
	virtual void agregarComponente(Componente* a);
	virtual string tostring();
};