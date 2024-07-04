#pragma once
#include"Motor.h"

using namespace std;

class MotorGaston :public Motor {

public:
	MotorGaston();
	virtual void encedner();
	virtual void acelerar();
	virtual void apagar();
};
