#pragma once
#include"Coleccion.h"
#include"IteradorArreglo.h"

class ColeccionArreglo :public Coleccion {

private:
	ObjetoBase** vec;//(*1) es un arreglo dinamico, (*2) puedo determinar su tamano en tiempo de ejecucion
	int cantidad; //elemtos validos en el vector 
	int tamano;//tamano del vector
public:

	ColeccionArreglo(int tam);//inidca el tamano del vector 

	virtual~ColeccionArreglo();

	virtual void agregar(ObjetoBase* obj);

	virtual ObjetoBase* obtener(int pos)const;

	virtual int MaxElemntos()const;

	virtual int numeroElementos()const;

	virtual bool estaVacio()const;

	virtual Iterador* obtenerIterador() const;

	virtual string tostring() const;

	////para trabajar en casa 
	//ColeccionArreglo(const ColeccionArreglo&); //costructor copia
	//virtual ColeccionArreglo& operator =(const ColeccionArreglo&);
	//virtual ObjetoBase*& operator[](int) const;
	//virtual ObjetoBase* eliminar(int = -1);
	//virtual ObjetoBase* eliminar(const ObjetoBase&);

};