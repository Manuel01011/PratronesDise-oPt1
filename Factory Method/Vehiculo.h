#pragma once
#include<iostream>
#include<sstream>

using namespace std;

//Herencia de vehiculos

class Vehiculo {//clase abtracta basica para caputurar el concepto
public:
	virtual void printVehiculo() = 0; //M.V.P
};