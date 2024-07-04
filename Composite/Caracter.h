#pragma once
#include"Componente.h"

//elemnto simple
class Caracter :public Componente {
private:
	string nombre;
	double precio;

public:
	Caracter();
	Caracter(string _nombre,double _precio);
	virtual double obtenerPrecio();
	string tostring();
	void agregarComponente(Componente* a);//se pone ya que se deriva de componente
};