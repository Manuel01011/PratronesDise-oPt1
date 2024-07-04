#pragma once
#include"CreadorVehiculo.h"
#include"Moto.h"

class CreadorMoto:public creadorVehiculo{
public:
	Vehiculo* creaVehiculo();
};