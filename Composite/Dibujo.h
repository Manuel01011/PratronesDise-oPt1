#pragma once
#include"Componente.h"

//elemnto simple
class Dibujo :public Componente {
private:
	string nombre;
	double precio;

public:
	Dibujo();
	Dibujo(string _nombre, double _precio);
	virtual double obtenerPrecio();
	string tostring();
	void agregarComponente(Componente* a);//se pone ya que se deriva de componente
};