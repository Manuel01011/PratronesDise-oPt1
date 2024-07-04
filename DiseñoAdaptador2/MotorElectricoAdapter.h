#pragma once
#include"MotorElectrico.h"
#include"Motor.h"

class MotorElectricoAdpater :public Motor {
private:
	MotorElectrico* MotorElectricoPTR;
public:
	MotorElectricoAdpater(MotorElectrico* ptr);
	virtual void encedner();
	virtual void acelerar();
	virtual void apagar();

};