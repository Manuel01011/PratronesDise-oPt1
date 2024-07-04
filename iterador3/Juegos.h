#pragma once
#include"ObjetoBase.h"

class Juegos :public ObjetoBase {
private:
	string nombre;
	string plataforma;
public:

	Juegos(string _nombre,string _plata);

	virtual~Juegos();

	string tostring();
};