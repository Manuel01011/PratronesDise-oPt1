#pragma once
#include<iostream>
#include<sstream>

using namespace std;

class Combo { //clase base clase abstracta 

public:
	double precio;

	virtual~Combo();
	virtual double costo() = 0;
	virtual string tostring() = 0;
	
};
