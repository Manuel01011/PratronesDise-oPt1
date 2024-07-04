#pragma once
#include"Composite.h"

class Oracion :public Composite {
private:
	string descripcion;
	double _precio;
public:
	Oracion(string = "", double = 0.0);
	virtual~Oracion();
	virtual string ObtenerDescripcion();
	virtual double obtenerPrecio();
	virtual void agregarComponente(Componente* a);
	virtual string tostring();
};