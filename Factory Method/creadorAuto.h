#pragma once
#include"CreadorVehiculo.h"
#include"Auto.h"

class CreadorAuto :public creadorVehiculo {
public:
	Vehiculo* creaVehiculo();
};