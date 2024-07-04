#pragma once
#include"Colecion.h"
#include"IteradorArreglo.h"

class ColeccionArreglo :public Coleccion {

private:
	int cant;
	int tamano;
	ObjetoBase** vector;
public:
	ColeccionArreglo(int a);
	virtual~ColeccionArreglo();
	virtual void agregar(ObjetoBase* a);
	virtual ObjetoBase* optener(int a);
	virtual Iterador* optenerIterador();
	virtual bool estavacia();
	virtual string tostring();

};