#pragma once
#include<iostream>
#include<sstream>

using namespace std;

class Componente {

public:
	Componente() {

	}
	virtual~Componente() {

	}
	virtual string tostring() = 0;//M.V.P
	virtual double obtenerPrecio() = 0; //M.V.P
	virtual void agregarComponente(Componente* a) = 0;//M.V.P solo para el composite

};