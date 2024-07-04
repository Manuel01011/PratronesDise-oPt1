#pragma once
#include"Coleccion.h"
#include"Iterador.h"
#include"Nodo.h"
#include"IteradorLista.h"

class ColeccionLista :public Coleccion {

private:
	int n; //cantidad de elementos
	Nodo* primero; //ve al primero
	Nodo* Ultimo; //ve al ultimo

public:
	ColeccionLista();

	virtual~ColeccionLista();

	virtual void agregar(ObjetoBase* obj);

	virtual ObjetoBase* obtener(int pos)const;

	virtual int numeroElementos()const;

	virtual bool estaVacio()const;

	virtual Iterador* obtenerIterador();

	virtual string tostring();
};