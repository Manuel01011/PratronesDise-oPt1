#pragma once
#include<iostream>
#include<sstream>

using namespace std;

class MotorElectrico {

private:
	bool conectado;

public:
	MotorElectrico();
	void conectar();
	void activar();
	void MoverMasRapido();
	void detener();
	void desconectar();
};