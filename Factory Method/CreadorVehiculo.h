#pragma once
#include"Vehiculo.h"

//otra herenia - creador vehiculo

class creadorVehiculo {
public:
	virtual Vehiculo* creaVehiculo() = 0; //M.V.P

};