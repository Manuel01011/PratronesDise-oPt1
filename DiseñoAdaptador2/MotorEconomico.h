#pragma once
#include"Motor.h"

using namespace std;

class MotorEconomico :public Motor {

public:
	MotorEconomico();
	virtual void encedner();
	virtual void acelerar();
	virtual void apagar();
};