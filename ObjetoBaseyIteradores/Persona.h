#pragma once
#include"Base.h"
#include<string>

class Persona:public ObjetoBase {

private:
	string nombre;
	string cedula;
public:

	Persona(string = "", string = "");

	virtual~Persona();

	virtual string tostring() const;
};