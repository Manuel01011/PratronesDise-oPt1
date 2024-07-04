#pragma once
#include"Base.h"
#include"Iterador.h"

class Coleccion :public ObjetoBase {//interfaz de la clase coleccion algo muy general

public:
	Coleccion() {

	}

	virtual~Coleccion() {

	}

	virtual void agregar(ObjetoBase* obj) = 0;

	virtual ObjetoBase* obtener(int)const = 0;

	virtual int numeroElementos()const = 0;

	virtual bool estaVacio()const = 0;

	virtual Iterador* obtenerIterador() const= 0;

	virtual string tostring() const = 0;

	//se asume esta parte como trabajo en la casa 

	//Coleccion(const Coleccion&);//constructor copia

	//virtual Coleccion& operator=(const Coleccion&);

	//virtual void agregar(const Coleccion*); agregar coleccion a una coleccion

	//virtual ObjetoBase* eliminar(int = -1) = 0;

	//virtual ObjetoBase* eleiminar(const ObjetoBase&) = 0 ;

	//virtual void eliminarTodos(bool = false);


};