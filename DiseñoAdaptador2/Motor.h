#pragma once
#include<iostream>
#include<sstream>

using namespace std;

class Motor {//interfaz
public:
	virtual void encedner() = 0;
	virtual void acelerar() = 0;
	virtual void apagar() = 0;

};